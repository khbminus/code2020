# a = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59,
#      61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127,
#      131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191,
#      193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257,
#      263, 269, 271]
#
# for i in range(1, 15):
#     arr = a[:i]
#     best = 10 ** 100
#     lol = 0
#     for mask in range(0, 2 ** i):
#         now = [1, 1]
#         for x in range(i):
#             now[(mask >> x) & 1] *= arr[x]
#         if now[0] < now[1] and now[1] - now[0] < best:
#             best = now[1] - now[0]
#             lol = now[0]
#     print(lol, end=' ')

# s = '''1 1
# 2 2
# 3 5
# 4 14
# 5 42
# 6 165
# 7 714
# 8 3094
# 9 14858
# 10 79534
# 11 447051
# 12 2714690
# 13 17395070
# 14 114371070
# 15 783152070
# 16 5708587335
# 17 43848093003
# 18 342444658094
# 19 2803119896185
# 20 23619540863730
# 21 201813981102615
# 22 1793779293633437
# 23 16342050964565645
# 24 154170926013430326
# 25 1518409177581024365
# 26 15259825120722837478
# 27 154870329715038713659
# 28 1601991088154989174258
# 29 16725278985898957454695
# 30 177792163538134124432895
# 31 2003615963401499430234017
# 32 22932432897807928504246930
# 33 268417244825173788264575798'''.split('\n')
# for x in s:
#     print(x.split()[1])

a = [1,1,2,5,14,42,132,429,1430,4862,16796,58786,
208012,742900,2674440,9694845,35357670,129644790,
477638700,1767263190,6564120420,24466267020,
91482563640,343059613650,1289904147324,
4861946401452,18367353072152,69533550916004,
263747951750360,1002242216651368,3814986502092304]
print(*a, sep='\n')