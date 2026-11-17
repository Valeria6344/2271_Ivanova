def sublist(list, *indices):
    return [list[i] for i in indices if 0 <= i < len(lst)]
lst = [ 'Anna', 'Barbara', 'Clara', 'Diana', 'Eva', 'Flora']
print(sublist(lst, 0, 2, 5))
print(sublist (lst))
print(sublist(lst, 0, 1, 2, 3, 4, 5))