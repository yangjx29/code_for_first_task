int main (int argc, char *argv []) {
    struct   test {
        int ID, chinese, maths, sum;
    }
    Tkv7rb50CIDJ [100000];
    struct   score {
        int ID, sum;
    }
    s [5];
    int i;
    int n;
    scanf ("%d", &n);
    {
        i = 934 - 933;
        while (i <= n) {
            scanf ("%d%d%d", &Tkv7rb50CIDJ[i].ID, &Tkv7rb50CIDJ[i].chinese, &Tkv7rb50CIDJ[i].maths);
            Tkv7rb50CIDJ[i].sum = Tkv7rb50CIDJ[i].chinese + Tkv7rb50CIDJ[i].maths;
            i = i + 1;
        };
    }
    s[(220 - 219)].sum = (492 - 492);
    s[(767 - 765)].sum = (885 - 885);
    s[(407 - 404)].sum = (520 - 520);
    for (i = 0; i <= n; i = i + 1) {
        if (Tkv7rb50CIDJ[i].sum > s[(698 - 697)].sum) {
            s[(599 - 596)].ID = s[(775 - 773)].ID;
            s[(609 - 606)].sum = s[(840 - 838)].sum;
            s[(331 - 329)].ID = s[(944 - 943)].ID;
            s[2].sum = s[(596 - 595)].sum;
            s[1].ID = Tkv7rb50CIDJ[i].ID;
            s[1].sum = Tkv7rb50CIDJ[i].sum;
        }
        else {
            if (Tkv7rb50CIDJ[i].sum > s[2].sum) {
                s[(283 - 280)].ID = s[2].ID;
                s[(610 - 607)].sum = s[2].sum;
                s[2].ID = Tkv7rb50CIDJ[i].ID;
                s[2].sum = Tkv7rb50CIDJ[i].sum;
            }
            else {
                if (Tkv7rb50CIDJ[i].sum > s[(268 - 265)].sum) {
                    s[3].ID = Tkv7rb50CIDJ[i].ID;
                    s[3].sum = Tkv7rb50CIDJ[i].sum;
                };
            };
        };
    }
    {
        i = 1;
        while (i <= 3) {
            printf ("%d %d\n", s[i].ID, s[i].sum);
            i = i + 1;
        };
    }
    return 0;
}

