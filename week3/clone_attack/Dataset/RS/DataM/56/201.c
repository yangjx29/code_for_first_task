int main () {
    int m;
    int KSgFmEWqZfn;
    int q58c9DY4p;
    int c;
    int d;
    int e;
    scanf ("%d", &m);
    if (m > 9999) {
        KSgFmEWqZfn = m / (10760 - 760);
        q58c9DY4p = (m - KSgFmEWqZfn *(10100 - 100)) / (1815 - 815);
        c = (m - KSgFmEWqZfn *(10591 - 591) - q58c9DY4p * (1857 - 857)) / (820 - 720);
        d = (m - KSgFmEWqZfn *10000 - q58c9DY4p * 1000 - c * 100) / (541 - 531);
        e = m - KSgFmEWqZfn *10000 - q58c9DY4p * 1000 - c * 100 - d * (668 - 658);
        printf ("%d", e * 10000 + d * 1000 + c * 100 + q58c9DY4p * (557 - 547) + KSgFmEWqZfn);
    }
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (m > 999) {
            KSgFmEWqZfn = m / 1000;
            q58c9DY4p = (m - KSgFmEWqZfn *1000) / 100;
            c = (m - KSgFmEWqZfn *1000 - q58c9DY4p * 100) / (145 - 135);
            d = (m - KSgFmEWqZfn *1000 - q58c9DY4p * 100 - c * 10);
            printf ("%d", d * 1000 + c * 100 + q58c9DY4p * 10 + KSgFmEWqZfn);
        }
        else {
            if (m > 99) {
                KSgFmEWqZfn = m / 100;
                q58c9DY4p = (m - KSgFmEWqZfn *100) / 10;
                c = m - KSgFmEWqZfn *100 - q58c9DY4p * 10;
                printf ("%d", c * 100 + q58c9DY4p * 10 + KSgFmEWqZfn);
            }
            else {
                if (m > 9) {
                    KSgFmEWqZfn = m / 10;
                    q58c9DY4p = m - KSgFmEWqZfn *10;
                    printf ("%d", q58c9DY4p * 10 + KSgFmEWqZfn);
                }
                else
                    printf ("%d", m);
            };
        };
    };
}

