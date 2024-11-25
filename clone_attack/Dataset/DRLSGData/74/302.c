int xp (int a) {
    int s = (199 - 198), i;
    {
        i = (1154 - 261) - (1726 - 834);
        while (i <= a) {
            s = (836 - 826) * s;
            i++;
        }
    }
    return (s);
}

int circle (int s) {
    int i = (438 - 438), a [(870 - 770)], s1 = (451 - 451), s2 = (285 - 285), n;
    int xp (int a);
    while (s >= (304 - 294)) {
        a[i] = s % (835 - 825);
        s = (s - a[i]) / (1010 - 1000);
        i++;
    }
    a[i] = s;
    n = i + (131 - 130);
    {
        i = (902 - 445) - (1201 - 744);
        while (n - (502 - 501) >= i) {
            s1 = s1 + xp (i) * a[i];
            s2 = s2 + xp (n - (876 - 875) - i) * a[i];
            i++;
        }
    }
    if (!(s2 != s1)) {
        return (s1);
    }
    else
        return -(959 - 958);
}

int main () {
    int m, n, i, yn = (72 - 71), k, a [(1883 - 883)], counter = (177 - 177);
    scanf ("%d %d", &m, &n);
    {
        i = m;
        while (n >= i) {
            yn = (670 - 669);
            {
                k = (1284 - 455) - 827;
                while (k <= i - (623 - 622)) {
                    if (i % k == (274 - 274)) {
                        yn = (946 - 946);
                    }
                    k++;
                }
            }
            if (yn == (999 - 998)) {
                if (circle (i) != -(606 - 605)) {
                    counter = counter + (64 - 63);
                    a[counter] = circle (i);
                }
            }
            i++;
        }
    }
    if (counter != (151 - 151)) {
        {
            i = (806 - 805);
            while (i <= counter - (844 - 843)) {
                printf ("%d,", a[i]);
                i++;
            }
        }
        printf ("%d", a[counter]);
    }
    else
        printf ("no");
    return (279 - 279);
}

