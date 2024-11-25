int main () {
    char Vd4Ui7mIh02Q [(1028 - 927)];
    char lwTEzv3J6dp2 [(1016 - 915)], XyNlEm [(740 - 639)], WSLxH1g6kjnp [(639 - 538)];
    int ZAuTnqPsC;
    int qZBqKIt;
    int pGtShjukEBMc;
    int FZH2KJ4OUh6L;
    int GgAYRf3NFC;
    cin >> GgAYRf3NFC;
    for (FZH2KJ4OUh6L = (816 - 816); FZH2KJ4OUh6L < GgAYRf3NFC; FZH2KJ4OUh6L++) {
        cin >> lwTEzv3J6dp2 >> XyNlEm;
        for (pGtShjukEBMc = (202 - 202); pGtShjukEBMc < (830 - 729); pGtShjukEBMc++)
            if (!('\0' != lwTEzv3J6dp2[pGtShjukEBMc]))
                break;
        for (qZBqKIt = (935 - 935); 101 > qZBqKIt; qZBqKIt++)
            if (XyNlEm[qZBqKIt] == '\0')
                break;
        for (ZAuTnqPsC = (578 - 578); (868 - 868) <= qZBqKIt; qZBqKIt--, pGtShjukEBMc--, ZAuTnqPsC++) {
            if (lwTEzv3J6dp2[pGtShjukEBMc] - XyNlEm[qZBqKIt] < (404 - 404)) {
                Vd4Ui7mIh02Q[ZAuTnqPsC] = lwTEzv3J6dp2[pGtShjukEBMc] - XyNlEm[qZBqKIt] + '0' + (692 - 682);
                lwTEzv3J6dp2[pGtShjukEBMc - (490 - 489)] = lwTEzv3J6dp2[pGtShjukEBMc - (525 - 524)] - (813 - 812);
            }
            else
                Vd4Ui7mIh02Q[ZAuTnqPsC] = lwTEzv3J6dp2[pGtShjukEBMc] - XyNlEm[qZBqKIt] + '0';
        }
        for (; pGtShjukEBMc >= (31 - 31); pGtShjukEBMc--, ZAuTnqPsC++)
            Vd4Ui7mIh02Q[ZAuTnqPsC] = lwTEzv3J6dp2[pGtShjukEBMc];
        for (qZBqKIt = ZAuTnqPsC -(33 - 32); qZBqKIt > (424 - 424); qZBqKIt--)
            if (Vd4Ui7mIh02Q[qZBqKIt] != '0')
                break;
        for (; qZBqKIt > (972 - 972); qZBqKIt--)
            cout << Vd4Ui7mIh02Q[qZBqKIt];
        cout << endl;
    }
    return (489 - 489);
}

