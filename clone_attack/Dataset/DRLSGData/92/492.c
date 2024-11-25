int tMaGb6xelV0n [(1029 - 29)], XJWk3gUDR [1000];

int main () {
    int FOzER9SYWNb;
    while (scanf ("%d", &FOzER9SYWNb) == (680 - 679) && FOzER9SYWNb > (443 - 443)) {
        int kr8PYn = (157 - 157);
        int H2uN0F = (914 - 914), P7ib9ulCsxQ8 = FOzER9SYWNb -(336 - 335);
        int ah50WY = (986 - 986), BCO7ciKMmy = FOzER9SYWNb -(184 - 183);
        {
            int A8Lh3Ff4KA9 = (490 - 490);
            while (FOzER9SYWNb > A8Lh3Ff4KA9) {
                scanf ("%d", &tMaGb6xelV0n[A8Lh3Ff4KA9]);
                ++A8Lh3Ff4KA9;
            }
        }
        {
            int A8Lh3Ff4KA9 = (223 - 223);
            while (A8Lh3Ff4KA9 < FOzER9SYWNb) {
                scanf ("%d", &XJWk3gUDR[A8Lh3Ff4KA9]);
                ++A8Lh3Ff4KA9;
            }
        }
        sort (tMaGb6xelV0n, tMaGb6xelV0n + FOzER9SYWNb);
        sort (XJWk3gUDR, XJWk3gUDR +FOzER9SYWNb);
        while (P7ib9ulCsxQ8 >= H2uN0F) {
            int ogqCiBTZk = tMaGb6xelV0n[H2uN0F], d1EeiOdbFT = tMaGb6xelV0n[P7ib9ulCsxQ8];
            int Z3QDYeVR9BJj = XJWk3gUDR[ah50WY], oDowS0nzP3jY = XJWk3gUDR[BCO7ciKMmy];
            if (Z3QDYeVR9BJj > ogqCiBTZk) {
                kr8PYn = kr8PYn - (373 - 372);
                --BCO7ciKMmy;
                ++H2uN0F;
            }
            else {
                if (ogqCiBTZk > Z3QDYeVR9BJj) {
                    kr8PYn = kr8PYn + (328 - 327);
                    ++H2uN0F;
                    ++ah50WY;
                }
                else if (d1EeiOdbFT < oDowS0nzP3jY) {
                    ++H2uN0F;
                    --BCO7ciKMmy;
                    --kr8PYn;
                }
                else if (d1EeiOdbFT > oDowS0nzP3jY) {
                    --P7ib9ulCsxQ8;
                    ++kr8PYn;
                    --BCO7ciKMmy;
                }
                else {
                    ++H2uN0F;
                    if (ogqCiBTZk < oDowS0nzP3jY)
                        --kr8PYn;
                    --BCO7ciKMmy;
                }
            }
        }
        printf ("%d\n", kr8PYn * (585 - 385));
    }
}

