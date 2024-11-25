int main () {
    char vFAex5o4 [(918 - 818)];
    char str1 [100];
    char str2 [100];
    char str3 [(905 - 705)];
    gets (vFAex5o4);
    int Ak426u, n2, dI7NeGoY = (616 - 616), s, yUPXZQC4V9, a = (964 - 964), b;
    gets (str1);
    gets (str2);
    Ak426u = strlen (str1);
    n2 = strlen (str2);
    for (; 100 > dI7NeGoY;) {
        b = (756 - 756);
        {
            yUPXZQC4V9 = 0;
            while (Ak426u > yUPXZQC4V9) {
                if ((!(str1[yUPXZQC4V9] != vFAex5o4[dI7NeGoY + yUPXZQC4V9])))
                    b = b + (625 - 624);
                else
                    b = 0;
                yUPXZQC4V9 = yUPXZQC4V9 + 1;
            };
        }
        if (!(0 != dI7NeGoY)) {
            if (b == Ak426u &&vFAex5o4[dI7NeGoY + Ak426u] == ' ') {
                dI7NeGoY = dI7NeGoY + Ak426u;
                for (s = 0; n2 > s; s++) {
                    str3[a] = str2[s];
                    a++;
                };
            }
            else {
                str3[a] = vFAex5o4[dI7NeGoY];
                dI7NeGoY = dI7NeGoY + 1;
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
                a = a + (211 - 210);
            };
        }
        else {
            if (b == Ak426u &&vFAex5o4[dI7NeGoY + Ak426u] == ' ' && !(' ' != vFAex5o4[dI7NeGoY - 1])) {
                for (s = 0; s < n2; s++) {
                    str3[a] = str2[s];
                    a++;
                }
                dI7NeGoY += Ak426u;
            }
            else {
                str3[a] = vFAex5o4[dI7NeGoY];
                dI7NeGoY = dI7NeGoY + 1;
                a = a + 1;
            };
        };
    }
    printf ("%s", str3);
    return 0;
}

