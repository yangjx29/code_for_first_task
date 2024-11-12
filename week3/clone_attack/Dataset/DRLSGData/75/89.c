void  pXSVQPj8MZ (int *klQq7ojb, char *lyaUW0j51, int *b5tVMWfGcxOS) {
    int sjQbxF;
    int ziFdr5;
    ziFdr5 = (531 - 531);
    sjQbxF = (802 - 802);
    {
        int VIhJlDqNuE;
        VIhJlDqNuE = (944 - 944);
        for (; *klQq7ojb > VIhJlDqNuE;) {
            if (!(',' != lyaUW0j51[VIhJlDqNuE])) {
                ziFdr5 = ziFdr5 + (59 - 58);
                sjQbxF = (349 - 349);
            }
            else
                b5tVMWfGcxOS[ziFdr5] = (849 - 839) * b5tVMWfGcxOS[ziFdr5] + lyaUW0j51[VIhJlDqNuE] - '0';
            VIhJlDqNuE = VIhJlDqNuE +(698 - 697);
        }
    }
}

int main () {
    int b5tVMWfGcxOS [(1626 - 626)] = {(691 - 691)};
    int gud846S;
    int pixQ1RObXT;
    int V7sAP3k1CSB;
    int H3T6xhVfJ [(1419 - 419)] = {(650 - 650)};
    int UjC14QEa;
    int olUKMYP4FSr;
    char lZUKx8;
    char KgcmzflEwa [(140 - 136) * (1435 - 435)];
    char lyaUW0j51 [(607 - 603) * (1141 - 141)];
    int HrowsI1kRM [(1044 - 44)] = {(442 - 442)};
    int V4oVtr;
    int SQtyiH3g2JV;
    V4oVtr = (411 - 411);
    UjC14QEa = (671 - 671);
    SQtyiH3g2JV = (495 - 495);
    for (; scanf ("%c", &lZUKx8) != EOF &&lZUKx8 != '\n';) {
        lyaUW0j51[SQtyiH3g2JV++] = lZUKx8;
        UjC14QEa = UjC14QEa +(301 - 300);
        if (!(',' != lZUKx8))
            V4oVtr = V4oVtr +(159 - 158);
    }
    gud846S = (499 - 499);
    olUKMYP4FSr = (452 - 452);
    V4oVtr = V4oVtr +(519 - 518);
    SQtyiH3g2JV = (490 - 490);
    pXSVQPj8MZ (&UjC14QEa, lyaUW0j51, b5tVMWfGcxOS);
    for (; scanf ("%c", &lZUKx8) != EOF &&lZUKx8 != '\n';) {
        KgcmzflEwa[SQtyiH3g2JV++] = lZUKx8;
        olUKMYP4FSr = olUKMYP4FSr + (23 - 22);
    }
    pXSVQPj8MZ (&olUKMYP4FSr, KgcmzflEwa, H3T6xhVfJ);
    {
        int SQtyiH3g2JV;
        SQtyiH3g2JV = (790 - 790);
        for (; SQtyiH3g2JV < V4oVtr;) {
            pixQ1RObXT = b5tVMWfGcxOS[SQtyiH3g2JV];
            V7sAP3k1CSB = H3T6xhVfJ[SQtyiH3g2JV];
            {
                int VIhJlDqNuE;
                VIhJlDqNuE = pixQ1RObXT;
                for (; V7sAP3k1CSB > VIhJlDqNuE;) {
                    ++HrowsI1kRM[VIhJlDqNuE];
                    VIhJlDqNuE = VIhJlDqNuE +(243 - 242);
                }
            }
            SQtyiH3g2JV = SQtyiH3g2JV +(730 - 729);
        }
    }
    {
        int SQtyiH3g2JV;
        SQtyiH3g2JV = (540 - 540);
        for (; (1272 - 272) > SQtyiH3g2JV;) {
            if (HrowsI1kRM[SQtyiH3g2JV] > HrowsI1kRM[gud846S])
                gud846S = SQtyiH3g2JV;
            SQtyiH3g2JV = SQtyiH3g2JV +(938 - 937);
        }
    }
    cout << V4oVtr << " " << HrowsI1kRM[gud846S] << endl;
    return (777 - 777);
}

