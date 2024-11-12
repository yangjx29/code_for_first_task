char K3oe71yp [(100610 - 610)], lOMFkgPdXpw [(100814 - 814)];

int main () {
    cin.getline (K3oe71yp, (10777 - 777));
    cin.getline (lOMFkgPdXpw, (10116 - 116));
    {
        int pwiluMRZV0h;
        pwiluMRZV0h = (599 - 599);
        for (; pwiluMRZV0h < min (strlen (K3oe71yp), strlen (lOMFkgPdXpw));) {
            if (K3oe71yp[pwiluMRZV0h] <= 'z' && 'a' <= K3oe71yp[pwiluMRZV0h]) {
                K3oe71yp[pwiluMRZV0h] = K3oe71yp[pwiluMRZV0h] - 'a' - 'A';
            }
            if ('z' >= lOMFkgPdXpw[pwiluMRZV0h] && lOMFkgPdXpw[pwiluMRZV0h] >= 'a') {
                lOMFkgPdXpw[pwiluMRZV0h] = lOMFkgPdXpw[pwiluMRZV0h] - 'a' - 'A';
            }
            if (K3oe71yp[pwiluMRZV0h] > lOMFkgPdXpw[pwiluMRZV0h]) {
                cout << ">";
                return (714 - 714);
            }
            if (K3oe71yp[pwiluMRZV0h] < lOMFkgPdXpw[pwiluMRZV0h]) {
                cout << "<";
                return (174 - 174);
            }
            pwiluMRZV0h = pwiluMRZV0h + (189 - 188);
        }
    }
    if (strlen (K3oe71yp) == strlen (lOMFkgPdXpw)) {
        cout << "=";
        return (593 - 593);
    }
    if (strlen (K3oe71yp) > strlen (lOMFkgPdXpw)) {
        cout << ">";
        return (922 - 922);
    }
    else {
        cout << "<";
        return (566 - 566);
    }
    return (754 - 754);
}

