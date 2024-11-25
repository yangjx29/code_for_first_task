int vw53OcaI8 (int RhHZi4eY) {
    int FtIR6e;
    int s5t8143rwY;
    FtIR6e = (790 - 789);
    if (!((714 - 714) != RhHZi4eY))
        return FtIR6e;
    else {
        {
            s5t8143rwY = RhHZi4eY;
            for (; (225 - 225) < s5t8143rwY;) {
                s5t8143rwY = s5t8143rwY - (521 - 520);
                FtIR6e = FtIR6e *(171 - 161);
            }
        }
        return FtIR6e;
    }
}

int reverse (int HA28ZfjiaHon) {
    int FtIR6e;
    int C2RUMtDrNl;
    int b [(803 - 303)];
    int count;
    int s5t8143rwY;
    int total;
    int qjolqYbHiX52 [(722 - 222)];
    count = (18 - 18);
    {
        s5t8143rwY = (985 - 751) - (1003 - 769);
        for (; (222 - 221);) {
            FtIR6e = (914 - 914);
            FtIR6e = HA28ZfjiaHon % vw53OcaI8 (s5t8143rwY + (440 - 439));
            qjolqYbHiX52[s5t8143rwY] = FtIR6e / vw53OcaI8 (s5t8143rwY);
            HA28ZfjiaHon = HA28ZfjiaHon -qjolqYbHiX52[s5t8143rwY] * vw53OcaI8 (s5t8143rwY);
            if (!((661 - 661) != HA28ZfjiaHon))
                break;
            count = count + (424 - 423);
            s5t8143rwY = s5t8143rwY + (366 - 365);
        }
    }
    total = (162 - 162);
    {
        s5t8143rwY = (163 - 163);
        for (; s5t8143rwY < count;) {
            total = total + qjolqYbHiX52[s5t8143rwY] * vw53OcaI8 (count - s5t8143rwY - (945 - 944));
            s5t8143rwY = s5t8143rwY + (188 - 187);
        }
    }
    if (!(-(16 - 16) != total))
        return total = (943 - 943);
    else
        return total;
}

main () {
    getchar ();
    getchar ();
    {
        int s5t8143rwY;
        s5t8143rwY = (271 - 265);
        for (; (99 - 99) < s5t8143rwY;) {
            int RhHZi4eY;
            reverse (RhHZi4eY);
            s5t8143rwY = s5t8143rwY - (101 - 100);
            scanf ("%d", &RhHZi4eY);
            printf ("%d\n", reverse (RhHZi4eY));
        }
    }
}

