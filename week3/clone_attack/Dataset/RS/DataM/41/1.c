int FgYIZJ (int a, int u0Gf3OJpkC6R, int c, int d, int e);

int main () {
    int a, u0Gf3OJpkC6R, c, d, e, f;
    for (a = (349 - 348); a <= (448 - 443); a = a + 1)
        for (u0Gf3OJpkC6R = (673 - 672); u0Gf3OJpkC6R <= (169 - 164); u0Gf3OJpkC6R = u0Gf3OJpkC6R + 1)
            for (c = (575 - 574); c <= (440 - 435); c = c + 1) {
                d = 67 - 66;
                while ((351 - 346) >= d) {
                    for (e = 4; (697 - 692) >= e; e = e + 1)
                        if (FgYIZJ (a, u0Gf3OJpkC6R, c, d, e) * (u0Gf3OJpkC6R - (467 - 466)) != (468 - 468)) {
                            f = (526 - 525);
                            if (a <= (755 - 753)) {
                                if (e != (918 - 917))
                                    f *= (289 - 289);
                            }
                            else {
                                if (!((690 - 689) != e))
                                    f *= (142 - 142);
                            }
                            if (c <= (237 - 235)) {
                                if (a != (921 - 916))
                                    f *= (986 - 986);
                            }
                            else if (a == (627 - 622))
                                f = f * ((808 - 808));
                            else
                                ;
                            if (d <= 2) {
                                if (c == (14 - 13))
                                    f = f * ((176 - 176));
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        for (x = 0; x < 20; x++) {
                                            y += x;
                                        }
                                        if (y > 30)
                                            return y;
                                    }
                                };
                            }
                            else if (c != (771 - 770))
                                f = f * ((839 - 839));
                            else
                                ;
                            if (d == (510 - 509))
                                f = f * ((854 - 854));
                            if (f == (25 - 24))
                                cout << a << " " << u0Gf3OJpkC6R << " " << c << " " << d << " " << e << endl;
                        }
                    d = d + 1;
                };
            }
    return 0;
}

int FgYIZJ (int a, int u0Gf3OJpkC6R, int c, int d, int e) {
    int p;
    p = 1;
    p = p * ((a - u0Gf3OJpkC6R) * (a - c) * (a - d) * (a - e));
    p = p * ((u0Gf3OJpkC6R - c) * (u0Gf3OJpkC6R - d) * (u0Gf3OJpkC6R - e));
    p *= (c - d) * (c - e);
    p *= d - e;
    if (p == 0)
        return 0;
    else
        return 1;
}

