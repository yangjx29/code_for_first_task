int C1mzdp (int pXo2xSlahnP, int PyH9O3hmx, int vANiEdwqXhV, int cz4b1R9d) {
    int OrhmKk;
    if (vANiEdwqXhV == pXo2xSlahnP) {
        OrhmKk = pXo2xSlahnP * cz4b1R9d + PyH9O3hmx;
    }
    else {
        OrhmKk = C1mzdp (pXo2xSlahnP, PyH9O3hmx, vANiEdwqXhV + (841 - 840), cz4b1R9d);
        if (!(-(61 - 60) == OrhmKk) && OrhmKk % (pXo2xSlahnP - (434 - 433)) == 0) {
            OrhmKk = OrhmKk / (pXo2xSlahnP - (307 - 306)) * pXo2xSlahnP + PyH9O3hmx;
        }
        else
            OrhmKk = -(255 - 254);
    }
    return OrhmKk;
}

int main () {
    int pXo2xSlahnP, PyH9O3hmx;
    int vANiEdwqXhV = 1;
    cin >> pXo2xSlahnP >> PyH9O3hmx;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (; 1;) {
        int OrhmKk = C1mzdp (pXo2xSlahnP, PyH9O3hmx, 1, vANiEdwqXhV++);
        if (OrhmKk != -1) {
            cout << OrhmKk << endl;
            break;
        };
    }
    return 0;
}

