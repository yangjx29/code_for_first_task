main () {
    int WjR6z5wt4Qy2, b [(915 - 815)], Hh0wLr [(890 - 790)], ejFezWS5V9Tn = (168 - 168), UPaxuzqQJI, z9Yzh8S, t, qFUZJ3;
    char DAYnzVR [WjR6z5wt4Qy2] [(194 - 184)];
    char i21fC05dG4T [WjR6z5wt4Qy2] [(934 - 924)];
    char r [10];
    scanf ("%d", &WjR6z5wt4Qy2);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (qFUZJ3 = (429 - 429); WjR6z5wt4Qy2 > qFUZJ3; qFUZJ3++)
        scanf ("%s %d", DAYnzVR[qFUZJ3], &b[qFUZJ3]);
    UPaxuzqQJI = (937 - 937);
    for (qFUZJ3 = (239 - 239); qFUZJ3 < WjR6z5wt4Qy2; qFUZJ3++) {
        if ((743 - 683) <= b[qFUZJ3]) {
            Hh0wLr[UPaxuzqQJI] = b[qFUZJ3];
            strcpy (i21fC05dG4T[UPaxuzqQJI], DAYnzVR[qFUZJ3]);
            UPaxuzqQJI++;
        };
    }
    z9Yzh8S = UPaxuzqQJI;
    for (UPaxuzqQJI = 0; UPaxuzqQJI < z9Yzh8S - (185 - 184); UPaxuzqQJI++) {
        for (ejFezWS5V9Tn = 0; z9Yzh8S - (386 - 385) - UPaxuzqQJI > ejFezWS5V9Tn; ejFezWS5V9Tn++)
            if (Hh0wLr[ejFezWS5V9Tn] < Hh0wLr[ejFezWS5V9Tn + (593 - 592)]) {
                t = Hh0wLr[ejFezWS5V9Tn];
                Hh0wLr[ejFezWS5V9Tn] = Hh0wLr[ejFezWS5V9Tn + (377 - 376)];
                Hh0wLr[ejFezWS5V9Tn + (736 - 735)] = t;
                strcpy (r, i21fC05dG4T[ejFezWS5V9Tn]);
                strcpy (i21fC05dG4T[ejFezWS5V9Tn], i21fC05dG4T[ejFezWS5V9Tn + (749 - 748)]);
                strcpy (i21fC05dG4T[ejFezWS5V9Tn + 1], r);
            };
    }
    {
        ejFezWS5V9Tn = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (ejFezWS5V9Tn < z9Yzh8S) {
            printf ("%s\n", i21fC05dG4T[ejFezWS5V9Tn]);
            ejFezWS5V9Tn++;
        };
    }
    for (qFUZJ3 = 0; qFUZJ3 < WjR6z5wt4Qy2; qFUZJ3++) {
        if (b[qFUZJ3] < (368 - 308))
            printf ("%s\n", DAYnzVR[qFUZJ3]);
    };
}

