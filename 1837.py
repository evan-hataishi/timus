
def insert_to_al(al, p1, p2):
    if p1 not in al.keys():
        al[p1] = []
    al[p1].append(p2)

def fill_al(al, p1, p2, p3):
    insert_to_al(al, p1, p2)
    insert_to_al(al, p1, p3)
    insert_to_al(al, p2, p1)
    insert_to_al(al, p2, p3)
    insert_to_al(al, p3, p1)
    insert_to_al(al, p3, p2)

def bfs(al):
    d = {}
    d['Isenbaev'] = 0
    curr_dist = 1
    if 'Isenbaev' not in al.keys():
        return {}
    Q = al['Isenbaev']
    while Q:
        next = []
        for name in Q:
            if name not in d.keys():
                d[name] = curr_dist
                for hop in al[name]:
                    if hop not in d.keys():
                        next.append(hop)
        curr_dist += 1
        Q = next
    return d


n = int(input())
al = {}
for _ in range(n):
    p1, p2, p3 = input().split()
    fill_al(al, p1, p2, p3)
d = bfs(al)
for name in al.keys():
    if name not in d.keys():
        d[name] = "undefined"
names = list(al.keys())
names.sort()
for name in names:
    print("%s %s" % (name, str(d[name])))