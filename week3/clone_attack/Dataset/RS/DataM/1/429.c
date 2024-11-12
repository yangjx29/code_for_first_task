int f (int YmWirDwlz75, int wkWXdKQ);

int main () {
    int CNHB7UchZkQL;
    int AwbaOXlYB [(879 - 779)];
    int NUbGLlHwgSue;
    int YmWirDwlz75;
    int lXsoIAHB;
    scanf ("%d", &CNHB7UchZkQL);
    for (NUbGLlHwgSue = 1; CNHB7UchZkQL >= NUbGLlHwgSue; NUbGLlHwgSue = NUbGLlHwgSue +1) {
        scanf ("%d", &AwbaOXlYB[NUbGLlHwgSue]);
    }
    {
        NUbGLlHwgSue = 1;
        while (NUbGLlHwgSue <= CNHB7UchZkQL) {
            YmWirDwlz75 = AwbaOXlYB[NUbGLlHwgSue];
            NUbGLlHwgSue++;
            lXsoIAHB = f (YmWirDwlz75, (319 - 317));
            printf ("%d\n", lXsoIAHB);
        };
    }
    return 0;
}

int f (int YmWirDwlz75, int wkWXdKQ) {
    int NUbGLlHwgSue;
    int lXsoIAHB;
    lXsoIAHB = 1;
    if (YmWirDwlz75 < wkWXdKQ)
        return 0;
    for (NUbGLlHwgSue = wkWXdKQ; NUbGLlHwgSue < YmWirDwlz75; NUbGLlHwgSue++) {
        if (YmWirDwlz75 % NUbGLlHwgSue != 0)
            continue;
        else
            lXsoIAHB = lXsoIAHB + f (YmWirDwlz75 / NUbGLlHwgSue, NUbGLlHwgSue);
    }
    return lXsoIAHB;
}

