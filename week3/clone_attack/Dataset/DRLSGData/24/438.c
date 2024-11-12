int main () {
    int gl3LmReyHAt;
    char ezgnDE0 [(1016 - 816)] [(179 - 124)];
    int apFB21k;
    int ShAaB6Fr1NPj;
    int LTQrvg45IZ;
    char CRT65h [(1694 - 695)];
    gets (CRT65h);
    int PbYwqKS3iM4o [(1017 - 817)];
    int YGMmvXN;
    YGMmvXN = (169 - 169);
    gl3LmReyHAt = (357 - 357);
    {
        ShAaB6Fr1NPj = (963 - 963);
        for (; (286 - 285);) {
            if (!('\0' != CRT65h[ShAaB6Fr1NPj])) {
                ezgnDE0[YGMmvXN][gl3LmReyHAt] = '!';
                LTQrvg45IZ = YGMmvXN;
                break;
            }
            if (!(' ' != CRT65h[ShAaB6Fr1NPj])) {
                ezgnDE0[YGMmvXN][gl3LmReyHAt] = '!';
                YGMmvXN = YGMmvXN +(142 - 141);
                gl3LmReyHAt = (293 - 293);
            }
            else {
                ezgnDE0[YGMmvXN][gl3LmReyHAt] = CRT65h[ShAaB6Fr1NPj];
                gl3LmReyHAt = gl3LmReyHAt + (49 - 48);
            }
            ShAaB6Fr1NPj = ShAaB6Fr1NPj +(132 - 131);
        }
    }
    gl3LmReyHAt = (896 - 896);
    {
        YGMmvXN = (898 - 898);
        for (; LTQrvg45IZ >= YGMmvXN;) {
            PbYwqKS3iM4o[gl3LmReyHAt] = (177 - 177);
            {
                ShAaB6Fr1NPj = (904 - 904);
                for (; (930 - 929);) {
                    if (!('!' != ezgnDE0[YGMmvXN][ShAaB6Fr1NPj])) {
                        break;
                    }
                    ShAaB6Fr1NPj = ShAaB6Fr1NPj +(804 - 803);
                    PbYwqKS3iM4o[gl3LmReyHAt]++;
                }
            }
            YGMmvXN = YGMmvXN +(125 - 124);
            gl3LmReyHAt = gl3LmReyHAt + (786 - 785);
        }
    }
    apFB21k = 0;
    LTQrvg45IZ = 0;
    {
        ShAaB6Fr1NPj = (48 - 47);
        for (; ShAaB6Fr1NPj < gl3LmReyHAt;) {
            if (PbYwqKS3iM4o[apFB21k] > PbYwqKS3iM4o[ShAaB6Fr1NPj]) {
                apFB21k = ShAaB6Fr1NPj;
            }
            if (PbYwqKS3iM4o[LTQrvg45IZ] < PbYwqKS3iM4o[ShAaB6Fr1NPj]) {
                LTQrvg45IZ = ShAaB6Fr1NPj;
            }
            ShAaB6Fr1NPj = ShAaB6Fr1NPj +1;
        }
    }
    {
        ShAaB6Fr1NPj = 0;
        for (; ezgnDE0[LTQrvg45IZ][ShAaB6Fr1NPj] != '!';) {
            printf ("%c", ezgnDE0[LTQrvg45IZ][ShAaB6Fr1NPj]);
            ShAaB6Fr1NPj = ShAaB6Fr1NPj +1;
        }
    }
    {
        ShAaB6Fr1NPj = 0;
        for (; ezgnDE0[apFB21k][ShAaB6Fr1NPj] != '!';) {
            printf ("%c", ezgnDE0[apFB21k][ShAaB6Fr1NPj]);
            ShAaB6Fr1NPj = ShAaB6Fr1NPj +1;
        }
    }
    return 0;
}

