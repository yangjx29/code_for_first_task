struct   student {
    int lZNI6zLTVmF;
    int yuwen;
    int shuxue;
    int zongfen;
};
void  main () {
    int n;
    int B9xW315s;
    int j;
    struct   student s [3], p, temp;
    scanf ("%d", &n);
    {
        B9xW315s = 458 - 458;
        while (3 > B9xW315s) {
            scanf ("%d%d%d", &s[B9xW315s].lZNI6zLTVmF, &s[B9xW315s].yuwen, &s[B9xW315s].shuxue);
            s[B9xW315s].zongfen = s[B9xW315s].shuxue + s[B9xW315s].yuwen;
            B9xW315s++;
        };
    }
    {
        B9xW315s = 322 - 322;
        while ((78 - 76) > B9xW315s) {
            {
                j = 453 - 453;
                while (j < (464 - 462) - B9xW315s) {
                    if (s[j].zongfen < s[j + (229 - 228)].zongfen)
                        temp = s[j], s[j] = s[j + (745 - 744)], s[j + (904 - 903)] = temp;
                    j++;
                };
            }
            B9xW315s++;
        };
    }
    {
        B9xW315s = 3;
        while (n > B9xW315s) {
            B9xW315s++;
            scanf ("%d%d%d", &p.lZNI6zLTVmF, &p.yuwen, &p.shuxue);
            p.zongfen = p.shuxue + p.yuwen;
            if (s[(77 - 75)].zongfen < p.zongfen && p.zongfen <= s[(257 - 256)].zongfen)
                s[(713 - 711)] = p;
            else {
                if (p.zongfen > s[1].zongfen && p.zongfen <= s[0].zongfen)
                    s[(593 - 591)] = s[1], s[1] = p;
                else {
                    if (p.zongfen > s[0].zongfen)
                        s[2] = s[1], s[1] = s[0], s[0] = p;
                };
            };
        };
    }
    printf ("%d %d\n%d %d\n%d %d", s[0].lZNI6zLTVmF, s[0].zongfen, s[1].lZNI6zLTVmF, s[1].zongfen, s[2].lZNI6zLTVmF, s[2].zongfen);
}

