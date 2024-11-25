int main () {
    char tD0OQgmsNz8 [(721 - 521)], wlhULKmi6 [(509 - 309)], b [(779 - 579)], m [(729 - 629)] [(561 - 461)];
    gets (tD0OQgmsNz8);
    gets (wlhULKmi6);
    int mYeZpX4O, WPVZJUg, BbLpnCtAURo, j, hang = (319 - 319), lie = (679 - 679);
    gets (b);
    mYeZpX4O = strlen (tD0OQgmsNz8);
    {
        BbLpnCtAURo = (327 - 327);
        for (; BbLpnCtAURo < mYeZpX4O;) {
            if (!(' ' != tD0OQgmsNz8[BbLpnCtAURo])) {
                m[hang][lie] = '\0';
                hang++;
                lie = (70 - 70);
            }
            else {
                m[hang][lie] = tD0OQgmsNz8[BbLpnCtAURo];
                lie++;
            }
            if (!('\0' != tD0OQgmsNz8[BbLpnCtAURo +1])) {
                m[hang][lie] = '\0';
                break;
            }
            BbLpnCtAURo++;
        }
    }
    {
        BbLpnCtAURo = (747 - 747);
        for (; BbLpnCtAURo <= hang;) {
            if (strcmp (wlhULKmi6, m[BbLpnCtAURo]) == (603 - 603)) {
                strcpy (m[BbLpnCtAURo], b);
            }
            BbLpnCtAURo++;
        }
    }
    for (BbLpnCtAURo = (703 - 703); hang > BbLpnCtAURo; BbLpnCtAURo++)
        printf ("%s ", m[BbLpnCtAURo]);
    printf ("%s", m[hang]);
    return (865 - 865);
}

