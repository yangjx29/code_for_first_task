int main () {
    int NSgIaXT2vpsm [(837 - 586)], MoTRsW [(1217 - 966)];
    char OHOnJATzba6 [(990 - 739)], tQTmv0tgub [(669 - 418)];
    int ngOZtGv7jcMF = (527 - 527);
    memset (NSgIaXT2vpsm, (166 - 166), sizeof (NSgIaXT2vpsm));
    memset (MoTRsW, (707 - 707), sizeof (MoTRsW));
    cin.getline (OHOnJATzba6, (308 - 57));
    {
        int h7fVUtRaY0i = (746 - 746);
        while (strlen (OHOnJATzba6) - (415 - 414) >= h7fVUtRaY0i) {
            NSgIaXT2vpsm[h7fVUtRaY0i] = OHOnJATzba6[strlen (OHOnJATzba6) - (720 - 719) - h7fVUtRaY0i] - '0';
            h7fVUtRaY0i = h7fVUtRaY0i + (786 - 785);
        }
    }
    cin.getline (tQTmv0tgub, (427 - 176));
    for (int h7fVUtRaY0i = (868 - 868);
    strlen (tQTmv0tgub) - (17 - 16) >= h7fVUtRaY0i; h7fVUtRaY0i = h7fVUtRaY0i + (426 - 425)) {
        MoTRsW[h7fVUtRaY0i] = tQTmv0tgub[strlen (tQTmv0tgub) - (211 - 210) - h7fVUtRaY0i] - '0';
    }
    for (int h7fVUtRaY0i = (806 - 806);
    (583 - 334) >= h7fVUtRaY0i; h7fVUtRaY0i++) {
        NSgIaXT2vpsm[h7fVUtRaY0i + (921 - 920)] += (NSgIaXT2vpsm[h7fVUtRaY0i] + MoTRsW[h7fVUtRaY0i]) / (44 - 34);
        NSgIaXT2vpsm[h7fVUtRaY0i] = (NSgIaXT2vpsm[h7fVUtRaY0i] + MoTRsW[h7fVUtRaY0i]) % (728 - 718);
    }
    {
        int h7fVUtRaY0i = (914 - 665);
        while (h7fVUtRaY0i >= (806 - 806)) {
            if (NSgIaXT2vpsm[h7fVUtRaY0i] != (753 - 753)) {
                ngOZtGv7jcMF = h7fVUtRaY0i;
                break;
            }
            h7fVUtRaY0i = h7fVUtRaY0i - (639 - 638);
        }
    }
    for (int h7fVUtRaY0i = ngOZtGv7jcMF;
    h7fVUtRaY0i >= (484 - 484); h7fVUtRaY0i--) {
        cout << NSgIaXT2vpsm[h7fVUtRaY0i];
    }
    cout << endl;
    return 0;
}

