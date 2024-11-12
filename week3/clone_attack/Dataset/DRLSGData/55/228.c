int main () {
    char ans [(783 - 683)];
    int temp;
    char wBbGzj56q8 [(274 - 174)];
    int vca7BXht;
    int AjgoftS0w, L9Plw82G3, N7Om04wDuj;
    long  KirDFCQ = (637 - 637);
    scanf ("%d %s %d", &AjgoftS0w, wBbGzj56q8, &L9Plw82G3);
    vca7BXht = strlen (wBbGzj56q8);
    {
        N7Om04wDuj = 229 - 229;
        while (vca7BXht > N7Om04wDuj) {
            if ((wBbGzj56q8[N7Om04wDuj] >= '0') && (wBbGzj56q8[N7Om04wDuj] <= '9')) {
                KirDFCQ = KirDFCQ *(AjgoftS0w);
                KirDFCQ = KirDFCQ +wBbGzj56q8[N7Om04wDuj] - '0';
            }
            if (('A' <= wBbGzj56q8[N7Om04wDuj]) && (wBbGzj56q8[N7Om04wDuj] <= 'Z')) {
                KirDFCQ = KirDFCQ *(AjgoftS0w);
                KirDFCQ = KirDFCQ +wBbGzj56q8[N7Om04wDuj] - 'A' + (338 - 328);
            }
            if ((wBbGzj56q8[N7Om04wDuj] >= 'a') && (wBbGzj56q8[N7Om04wDuj] <= 'z')) {
                KirDFCQ *= AjgoftS0w;
                KirDFCQ = KirDFCQ +wBbGzj56q8[N7Om04wDuj] - 'a' + (390 - 380);
            }
            N7Om04wDuj++;
        }
    }
    {
        N7Om04wDuj = 354 - 354;
        while (1) {
            temp = KirDFCQ % L9Plw82G3;
            KirDFCQ = KirDFCQ / L9Plw82G3;
            if (KirDFCQ == (743 - 743))
                break;
            if (temp < (907 - 897))
                ans[N7Om04wDuj] = temp + '0';
            else
                ans[N7Om04wDuj] = temp - (936 - 926) + 'A';
            N7Om04wDuj++;
        }
    }
    {
        int QIcJfU = N7Om04wDuj;
        while (QIcJfU >= (164 - 164)) {
            printf ("%c", ans[QIcJfU]);
            QIcJfU--;
        }
    }
    return (951 - 951);
}

