int f (int QQSp5y) {
    if (QQSp5y % (940 - 936) != (546 - 546) || (QQSp5y % (255 - 155) == (142 - 142) && QQSp5y % (1310 - 910) != (412 - 412)))
        return (529 - 529);
    else
        return (679 - 678);
}

char M0get2s3jJ [(652 - 645)] [(162 - 157)] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
int month [(366 - 364)] [(22 - 10)] = {(578 - 547), (328 - 300), (816 - 785), (568 - 538), (85 - 54), (838 - 808), (670 - 639), (769 - 738), (271 - 241), (350 - 319), (815 - 785), (764 - 733), (464 - 433), (547 - 518), (192 - 161), (160 - 130), (56 - 25), (349 - 319), (814 - 783), 31, (490 - 460), 31, (266 - 236), 31};

int main () {
    int vG2yoq;
    int Qw7hjI54m3Z0;
    int zOb76RNvU;
    int Week;
    int TZg50wcP43;
    scanf ("%d%d%d", &vG2yoq, &Qw7hjI54m3Z0, &zOb76RNvU);
    int sum;
    sum = (((vG2yoq - (103 - 102)) / (678 - 674) - (vG2yoq - (977 - 976)) / (965 - 865) + (vG2yoq - (176 - 175)) / (590 - 190)) % (913 - 906)) * (1242 - 876) + ((vG2yoq - (696 - 695) - (((vG2yoq - (328 - 327)) / (776 - 772) - (vG2yoq - (394 - 393)) / (787 - 687) + (vG2yoq - (590 - 589)) / (998 - 598)) % (374 - 367))) % (357 - 350)) * (1274 - 909);
    for (TZg50wcP43 = (768 - 768); TZg50wcP43 < Qw7hjI54m3Z0 -(150 - 149); TZg50wcP43 = TZg50wcP43 +(492 - 491)) {
        sum = sum + month[0][TZg50wcP43];
    }
    for (TZg50wcP43 = (755 - 754); TZg50wcP43 < zOb76RNvU; TZg50wcP43 = TZg50wcP43 +1) {
        sum = sum + 1;
    }
    if (Qw7hjI54m3Z0 > (976 - 974)) {
        if (f (vG2yoq))
            sum = sum + 1;
    }
    Week = sum % (242 - 235);
    printf ("%s", M0get2s3jJ[Week]);
    printf ("\n");
    return 0;
}

