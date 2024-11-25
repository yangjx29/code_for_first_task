int main () {
    char wsztqXHOoTc [80] = {0};
    char NSXFtAdm5xn [80] = {0};
    int xguImzvRY7Gs;
    char s0ocXjmY [80] = {'\0'};
    gets (s0ocXjmY);
    int J5fiFO;
    char xwQFZeD5p [80] = {'\0'};
    gets (xwQFZeD5p);
    for (J5fiFO = 0; J5fiFO < 80; J5fiFO = J5fiFO +1) {
        if (65 <= s0ocXjmY[J5fiFO] && s0ocXjmY[J5fiFO] <= 90)
            NSXFtAdm5xn[J5fiFO] = s0ocXjmY[J5fiFO] + (635 - 603);
        else
            NSXFtAdm5xn[J5fiFO] = s0ocXjmY[J5fiFO];
        if (65 <= xwQFZeD5p[J5fiFO] && xwQFZeD5p[J5fiFO] <= 90)
            wsztqXHOoTc[J5fiFO] = xwQFZeD5p[J5fiFO] + 32;
        else
            wsztqXHOoTc[J5fiFO] = xwQFZeD5p[J5fiFO];
    }
    if (strcmp (NSXFtAdm5xn, wsztqXHOoTc) > 0)
        ;
    else if (strcmp (NSXFtAdm5xn, wsztqXHOoTc) < 0)
        ;
    else
        ;
    return 0;
}

