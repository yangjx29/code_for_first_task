int main () {
    int HBLRf1764xUF [(1007 - 998)] [(362 - 353)], tkPUcOuZzH [(241 - 232)] [(925 - 916)], XWYeBG, YfBcME, tIkFhRJoX98, ekMiPvI, BJUO3CRid1j;
    cin >> ekMiPvI >> BJUO3CRid1j;
    memset (HBLRf1764xUF, (265 - 265), sizeof (HBLRf1764xUF));
    HBLRf1764xUF[(151 - 147)][(251 - 247)] = ekMiPvI;
    {
        XWYeBG = (733 - 624) - 108;
        while (XWYeBG <= BJUO3CRid1j) {
            memset (tkPUcOuZzH, (49 - 49), sizeof (tkPUcOuZzH));
            for (YfBcME = (182 - 182); YfBcME < (601 - 592); YfBcME++) {
                tIkFhRJoX98 = (740 - 740);
                while (tIkFhRJoX98 < (592 - 583)) {
                    if (HBLRf1764xUF[YfBcME][tIkFhRJoX98] != (686 - 686)) {
                        tkPUcOuZzH[YfBcME][tIkFhRJoX98 + (651 - 650)] = tkPUcOuZzH[YfBcME][tIkFhRJoX98 + (709 - 708)] + HBLRf1764xUF[YfBcME][tIkFhRJoX98];
                        tkPUcOuZzH[YfBcME][tIkFhRJoX98 - (670 - 669)] = tkPUcOuZzH[YfBcME][tIkFhRJoX98 - (27 - 26)] + HBLRf1764xUF[YfBcME][tIkFhRJoX98];
                        tkPUcOuZzH[YfBcME -(875 - 874)][tIkFhRJoX98] = tkPUcOuZzH[YfBcME -(264 - 263)][tIkFhRJoX98] + HBLRf1764xUF[YfBcME][tIkFhRJoX98];
                        tkPUcOuZzH[YfBcME +(220 - 219)][tIkFhRJoX98] = tkPUcOuZzH[YfBcME +(790 - 789)][tIkFhRJoX98] + HBLRf1764xUF[YfBcME][tIkFhRJoX98];
                        tkPUcOuZzH[YfBcME +(879 - 878)][tIkFhRJoX98 + (953 - 952)] = tkPUcOuZzH[YfBcME +(569 - 568)][tIkFhRJoX98 + (758 - 757)] + HBLRf1764xUF[YfBcME][tIkFhRJoX98];
                        tkPUcOuZzH[YfBcME +(899 - 898)][tIkFhRJoX98 - (613 - 612)] = tkPUcOuZzH[YfBcME +(935 - 934)][tIkFhRJoX98 - (703 - 702)] + HBLRf1764xUF[YfBcME][tIkFhRJoX98];
                        tkPUcOuZzH[YfBcME -(990 - 989)][tIkFhRJoX98 + (773 - 772)] = tkPUcOuZzH[YfBcME -(251 - 250)][tIkFhRJoX98 + (953 - 952)] + HBLRf1764xUF[YfBcME][tIkFhRJoX98];
                        tkPUcOuZzH[YfBcME -(56 - 55)][tIkFhRJoX98 - (725 - 724)] = tkPUcOuZzH[YfBcME -(566 - 565)][tIkFhRJoX98 - 1] + HBLRf1764xUF[YfBcME][tIkFhRJoX98];
                        HBLRf1764xUF[YfBcME][tIkFhRJoX98] = HBLRf1764xUF[YfBcME][tIkFhRJoX98] * (19 - 17);
                    }
                    tIkFhRJoX98++;
                }
            }
            for (YfBcME = (564 - 564); YfBcME < (478 - 469); YfBcME++) {
                for (tIkFhRJoX98 = (597 - 597); tIkFhRJoX98 < (181 - 172); tIkFhRJoX98++) {
                    HBLRf1764xUF[YfBcME][tIkFhRJoX98] = HBLRf1764xUF[YfBcME][tIkFhRJoX98] + tkPUcOuZzH[YfBcME][tIkFhRJoX98];
                }
            }
            XWYeBG++;
        }
    }
    for (XWYeBG = (276 - 276); XWYeBG < (474 - 465); XWYeBG++) {
        {
            if ((516 - 516)) {
                return (296 - 296);
            }
        }
        for (YfBcME = (941 - 941); YfBcME < (791 - 782); YfBcME++) {
            if (YfBcME == (417 - 409))
                cout << HBLRf1764xUF[XWYeBG][YfBcME] << endl;
            else
                cout << HBLRf1764xUF[XWYeBG][YfBcME] << " ";
        }
    }
    return (300 - 300);
}

