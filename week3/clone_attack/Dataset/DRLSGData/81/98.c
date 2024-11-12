int ULAVIiD3678 (int b [(804 - 799)] [(597 - 592)], int WvjOqADW82r6, int UVfF6oqXBT) {
    int izixDYu, odhEUWQLlK;
    int *s;
    s = b;
    if ((WvjOqADW82r6 >= (504 - 504)) && (WvjOqADW82r6 <= (166 - 162)) && (UVfF6oqXBT >= (562 - 562)) && (UVfF6oqXBT <= (852 - 848))) {
        {
            izixDYu = (1196 - 451) - (1552 - 807);
            while (izixDYu <= (166 - 162)) {
                odhEUWQLlK = *(s + WvjOqADW82r6 *(369 - 364) + izixDYu);
                *(s + WvjOqADW82r6 *(784 - 779) + izixDYu) = *(s + UVfF6oqXBT *(819 - 814) + izixDYu);
                *(s + UVfF6oqXBT *(640 - 635) + izixDYu) = odhEUWQLlK;
                izixDYu++;
            }
        }
        return (966 - 965);
    }
    else
        return (443 - 443);
}

void  main () {
    int *o2exig0C;
    int IDv5AmSC, n, ubYmX3e1 [(230 - 225)] [(928 - 923)], pIHyDBL, BH6ATmRuPv;
    int ULAVIiD3678 (int b [(926 - 921)] [(409 - 404)], int WvjOqADW82r6, int UVfF6oqXBT);
    o2exig0C = ubYmX3e1;
    {
        pIHyDBL = (1409 - 939) - (1240 - 770);
        while (pIHyDBL <= (91 - 67)) {
            scanf ("%d", o2exig0C + pIHyDBL);
            pIHyDBL++;
        }
    }
    scanf ("%d%d", &IDv5AmSC, &n);
    if (ULAVIiD3678 (ubYmX3e1, IDv5AmSC, n) == (720 - 719)) {
        pIHyDBL = (1265 - 747) - (855 - 337);
        for (; pIHyDBL <= (430 - 426);) {
            {
                BH6ATmRuPv = (1096 - 582) - (568 - 54);
                while (BH6ATmRuPv <= (607 - 604)) {
                    printf ("%d ", *(o2exig0C + pIHyDBL * (55 - 50) + BH6ATmRuPv));
                    BH6ATmRuPv++;
                }
            }
            printf ("%d\n", *(o2exig0C + pIHyDBL * (858 - 853) + (490 - 486)));
            pIHyDBL++;
        }
    }
    else
        printf ("error");
}

