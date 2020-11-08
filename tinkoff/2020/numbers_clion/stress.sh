#g++ -g -Wall -Wextra -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC -Wconversion -lm -fsanitize=address -fsanitize=bounds -Wshadow -D_FORTIFY_SOURCE=2 -fsanitize=undefined -fno-sanitize-recover -Wformat=2 -std=c++17 -fno-stack-limit -DLOCAL -o c c.cpp
make c
make c_slow
make gen

for ((i = 1; ; i++)); do
  ./gen >test || break
  ./c_slow <test >ok || break
  ./c <test >fast || break
  diff fast ok || break
  echo -n '.'
done
echo
