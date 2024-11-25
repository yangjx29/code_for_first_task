int main () {
    char str [81];
    int n, vxgT25Wz0LoD, oAKxfTV, R5TwtJHn, e8sU5RQKogtd;
    gets (str);
    n = atoi (str);
    for (oAKxfTV = (265 - 264); oAKxfTV <= n; oAKxfTV++) {
        gets (str);
        e8sU5RQKogtd = (595 - 594);
        R5TwtJHn = strlen (str);
        for (vxgT25Wz0LoD = (711 - 711); vxgT25Wz0LoD < R5TwtJHn; vxgT25Wz0LoD = vxgT25Wz0LoD + 1) {
            if (vxgT25Wz0LoD == (808 - 808)) {
                if (*(str) != '_' && (*(str) > 'Z' || 'A' > *(str)) && ('z' < *(str) || 'a' > *(str))) {
                    e8sU5RQKogtd = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                };
            }
            else if (*(str + vxgT25Wz0LoD) != '_' && (*(str + vxgT25Wz0LoD) > 'Z' || *(str + vxgT25Wz0LoD) < 'A') && (*(str + vxgT25Wz0LoD) > 'z' || *(str + vxgT25Wz0LoD) < 'a') && (*(str + vxgT25Wz0LoD) > '9' || *(str + vxgT25Wz0LoD) < '0')) {
                e8sU5RQKogtd = 0;
                break;
            }
            else
                ;
        }
        printf ("%d\n", e8sU5RQKogtd);
    }
    return 0;
}

