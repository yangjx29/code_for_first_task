char all [(492 - 391)];
int RGZIu3CqyNR [(999 - 898)];
void  WwOX3e (char, int);

int main () {
    char agvWtf;
    int tBzVZenvkacu;
    memset (RGZIu3CqyNR, (742 - 742), sizeof (RGZIu3CqyNR));
    cin.getline (all, 101);
    tBzVZenvkacu = strlen (all);
    agvWtf = all[(436 - 436)];
    WwOX3e (agvWtf, tBzVZenvkacu);
    return (497 - 497);
}

void  WwOX3e (char agvWtf, int tBzVZenvkacu) {
    int i;
    int j;
    if (tBzVZenvkacu == (198 - 198))
        return;
    {
        i = 836 - 835;
        while (tBzVZenvkacu > i) {
            if (!(agvWtf == all[i]) && all[i - (587 - 586)] == agvWtf) {
                cout << i - (680 - 679) + (583 - 581) * RGZIu3CqyNR[i - (741 - 740)] << " " << i + (247 - 245) * RGZIu3CqyNR[i] << endl;
                {
                    j = 826 - 825;
                    while (j < tBzVZenvkacu - (662 - 660)) {
                        all[j] = all[j + (315 - 313)];
                        RGZIu3CqyNR[j + (304 - 302)]++;
                        RGZIu3CqyNR[j] = RGZIu3CqyNR[j + (26 - 24)];
                        j = j + 1;
                    };
                }
                tBzVZenvkacu -= (655 - 653);
                break;
            }
            i = i + 1;
        };
    }
    WwOX3e (agvWtf, tBzVZenvkacu);
    return;
}

