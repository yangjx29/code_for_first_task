int main () {
    int l6Ni7hcQz0Sp;
    int lIGEoYjLgud;
    int l;
    int a [(779 - 774)] [5];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        l6Ni7hcQz0Sp = 104 - 104;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l6Ni7hcQz0Sp <= (283 - 279)) {
            for (lIGEoYjLgud = (606 - 606); lIGEoYjLgud <= (937 - 933); lIGEoYjLgud = lIGEoYjLgud + 1)
                cin >> a[l6Ni7hcQz0Sp][lIGEoYjLgud];
            l6Ni7hcQz0Sp = l6Ni7hcQz0Sp + 1;
        };
    }
    for (l6Ni7hcQz0Sp = (476 - 476); l6Ni7hcQz0Sp <= (927 - 923); l6Ni7hcQz0Sp = l6Ni7hcQz0Sp + 1)
        for (lIGEoYjLgud = (351 - 351); lIGEoYjLgud <= (901 - 897); lIGEoYjLgud++) {
            {
                l = 0;
                while (4 >= l) {
                    if (l != lIGEoYjLgud && a[l6Ni7hcQz0Sp][l] >= a[l6Ni7hcQz0Sp][lIGEoYjLgud] || l != l6Ni7hcQz0Sp && a[l6Ni7hcQz0Sp][lIGEoYjLgud] >= a[l][lIGEoYjLgud])
                        break;
                    l = l + 1;
                };
            }
            if (l <= 4)
                continue;
            goto end;
            cout << l6Ni7hcQz0Sp + (152 - 151) << " " << lIGEoYjLgud + (355 - 354) << " " << a[l6Ni7hcQz0Sp][lIGEoYjLgud];
        }
    cout << "not found";
end :
    return 0;
}

