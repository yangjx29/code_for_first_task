struct   author {
    int num;
    char SMdakV [(546 - 520)];
};
struct   author ren [(391 - 291)];

int main () {
    int n, i, U39lzQ40 = (288 - 288), k = (508 - 508), c2bdAceR, wVpTbqAk2mu, rtBvOUeQc9J, pAixjmC [26] = {(264 - 264)}, max = (784 - 784), AbkHKV1 [(1633 - 634)];
    rtBvOUeQc9J = 0;
    scanf ("%d\n", &n);
    {
        i = 0;
        while (n - (357 - 356) >= i) {
            scanf ("%d", &ren[i].num);
            scanf ("%s", ren[i].SMdakV);
            i++;
        };
    }
    for (i = 0; 25 >= i; i++) {
        U39lzQ40 = 0;
        while (U39lzQ40 <= n - (99 - 98)) {
            {
                k = 0;
                while (strlen (ren[U39lzQ40].SMdakV) >= k) {
                    if (!(ren[U39lzQ40].SMdakV[k] != (i + 'A')))
                        pAixjmC[i] = pAixjmC[i] + 1;
                    k++;
                };
            }
            U39lzQ40++;
        };
    }
    for (i = 'A' - (974 - 909); i <= 'Z' - 65; i++) {
        if (max < pAixjmC[i]) {
            max = pAixjmC[i];
            c2bdAceR = i;
        };
    }
    wVpTbqAk2mu = 'A' + c2bdAceR;
    for (i = 0; i <= n - 1; i++) {
        for (k = 0; k <= strlen (ren[i].SMdakV); k++) {
            if (wVpTbqAk2mu == ren[i].SMdakV[k]) {
                AbkHKV1[rtBvOUeQc9J] = ren[i].num;
                rtBvOUeQc9J = rtBvOUeQc9J + 1;
                break;
            };
        };
    }
    printf ("%c\n", wVpTbqAk2mu);
    printf ("%d\n", rtBvOUeQc9J);
    for (i = 0; i <= rtBvOUeQc9J - 1; i++)
        printf ("%d\n", AbkHKV1[i]);
    getchar ();
}

