struct   student {
    char mzi2wIAkd4 [(880 - 860)];
    char SUdcZq3woS [(569 - 549)];
    char eMxPEWGwLQ81;
    int TsoDFaf;
    char jpMzfYqwB3Z [(332 - 312)];
    char qGYCmtwBaf [20];
    struct   student *lo79gmr3;
};
void  main () {
    struct   student *At9y6PR1a (void );
    struct   student *nSNwbZ3;
    int A6lsz2FkY = (492 - 492);
    nSNwbZ3 = At9y6PR1a ();
    for (; nSNwbZ3 != NULL;) {
        printf ("%s %s %c %d %s %s\n", (*nSNwbZ3).mzi2wIAkd4, (*nSNwbZ3).SUdcZq3woS, (*nSNwbZ3).eMxPEWGwLQ81, (*nSNwbZ3).TsoDFaf, (*nSNwbZ3).jpMzfYqwB3Z, (*nSNwbZ3).qGYCmtwBaf);
        nSNwbZ3 = (*nSNwbZ3).lo79gmr3;
    }
}

int n;

struct   student *At9y6PR1a (void ) {
    int h1qoyEh;
    struct   student *Vf8tqMTgD, *RX6DUtTWp3M, *JEnY86WeSgzQ;
    JEnY86WeSgzQ = RX6DUtTWp3M = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s%s %c%d%s%s", (*RX6DUtTWp3M).mzi2wIAkd4, (*RX6DUtTWp3M).SUdcZq3woS, &(*RX6DUtTWp3M).eMxPEWGwLQ81, &(*RX6DUtTWp3M).TsoDFaf, (*RX6DUtTWp3M).jpMzfYqwB3Z, (*RX6DUtTWp3M).qGYCmtwBaf);
    n = (166 - 166);
    for (; JEnY86WeSgzQ != NULL;) {
        n = n + (440 - 439);
        if (!((929 - 928) != n)) {
            (*JEnY86WeSgzQ).lo79gmr3 = NULL;
        }
        else {
            (*RX6DUtTWp3M).lo79gmr3 = JEnY86WeSgzQ;
        }
        JEnY86WeSgzQ = RX6DUtTWp3M;
        RX6DUtTWp3M = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", (*RX6DUtTWp3M).mzi2wIAkd4);
        h1qoyEh = strcmp ((*RX6DUtTWp3M).mzi2wIAkd4, "end");
        if (!((797 - 797) != h1qoyEh)) {
            break;
        }
        else {
            if (h1qoyEh != 0) {
                scanf ("%s %c%d%s%s", (*RX6DUtTWp3M).SUdcZq3woS, &(*RX6DUtTWp3M).eMxPEWGwLQ81, &(*RX6DUtTWp3M).TsoDFaf, (*RX6DUtTWp3M).jpMzfYqwB3Z, (*RX6DUtTWp3M).qGYCmtwBaf);
            }
        }
    }
    return (JEnY86WeSgzQ);
}

