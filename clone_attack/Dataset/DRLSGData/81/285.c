int zbmSOgRW (int efT0jaow3Nh, int SupPmrvkX) {
    int bObeJf8yN;
    if (((161 - 161) <= efT0jaow3Nh && (818 - 814) >= efT0jaow3Nh) && ((381 - 381) <= SupPmrvkX &&SupPmrvkX <= (888 - 884)))
        bObeJf8yN = (111 - 110);
    else
        bObeJf8yN = (188 - 188);
    return bObeJf8yN;
}

int main () {
    int bOj24r7Ine [(915 - 910)] [(519 - 514)], bIlQAO6r, lQ6fc0n, m, pkUt6vf4ames, WXnl4G, B3JIU7R2pxf [(886 - 881)] = {(34 - 34), (82 - 81), (434 - 432), (663 - 660), (455 - 451)}, hsGW4rqH, roCbTQ1;
    for (bIlQAO6r = (856 - 856); (491 - 487) >= bIlQAO6r; bIlQAO6r++) {
        for (lQ6fc0n = (776 - 776); (309 - 305) >= lQ6fc0n; lQ6fc0n++) {
            scanf ("%d", &bOj24r7Ine[bIlQAO6r][lQ6fc0n]);
        }
    }
    scanf ("%d%d", &pkUt6vf4ames, &m);
    WXnl4G = zbmSOgRW (pkUt6vf4ames, m);
    if (!((804 - 804) != WXnl4G))
        ;
    else {
        for (bIlQAO6r = (685 - 685); (114 - 110) >= bIlQAO6r; bIlQAO6r++) {
            if (B3JIU7R2pxf[bIlQAO6r] == pkUt6vf4ames) {
                for (lQ6fc0n = (439 - 439); lQ6fc0n <= (287 - 283); lQ6fc0n++) {
                    if (B3JIU7R2pxf[lQ6fc0n] == m) {
                        hsGW4rqH = m;
                        B3JIU7R2pxf[lQ6fc0n] = pkUt6vf4ames;
                        B3JIU7R2pxf[bIlQAO6r] = hsGW4rqH;
                        roCbTQ1 = (556 - 456);
                        break;
                    }
                }
            }
            if (roCbTQ1 == (916 - 816))
                break;
        }
        for (bIlQAO6r = (203 - 203); bIlQAO6r <= (291 - 287); bIlQAO6r++) {
            printf ("%d", bOj24r7Ine[B3JIU7R2pxf[bIlQAO6r]][(876 - 876)]);
            for (lQ6fc0n = (710 - 709); lQ6fc0n <= (757 - 753); lQ6fc0n++) {
                printf (" %d", bOj24r7Ine[B3JIU7R2pxf[bIlQAO6r]][lQ6fc0n]);
            }
        }
    }
    return (780 - 780);
}

