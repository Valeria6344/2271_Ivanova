def every_other (seq):
    it = iter(seq)
    flag = True
    x = next(it, None)
    while x != None:
        if flag:
            yield x
        flag = not flag
        x = next(it, None)
print (*every_other([10, 20, 30, 40, 50]))
print(*every_other(range(10)))
print(*every_other(iter(range(10))))
print(sum(every_other(map(int, input().split()))))