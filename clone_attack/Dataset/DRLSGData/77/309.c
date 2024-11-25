char RpZ51c4fXS [(219 - 118)];
int HBQpdo = (817 - 817);

void  zhao (int kVt7HCqYunZ) {
    int yUIDin;
    int m;
    int lLIxOc;
    int jCkq1dpO;
    {
        yUIDin = (78 - 77);
        {
            if (0) {
                return 0;
            }
        }
        for (; kVt7HCqYunZ > yUIDin;) {
            {
                if (0) {
                    return 0;
                }
            }
            if (!(')' != RpZ51c4fXS[yUIDin])) {
                HBQpdo = HBQpdo +2;
                m = yUIDin;
                RpZ51c4fXS[yUIDin] = '.';
                break;
            }
            yUIDin = yUIDin + 1;
        }
    }
    {
        jCkq1dpO = m - 1;
        for (; jCkq1dpO >= (968 - 968);) {
            if (!('(' != RpZ51c4fXS[jCkq1dpO])) {
                lLIxOc = jCkq1dpO;
                RpZ51c4fXS[jCkq1dpO] = '.';
                break;
            }
            {
                if (0) {
                    return 0;
                }
            }
            jCkq1dpO = jCkq1dpO - 1;
        }
    }
    cout << lLIxOc << " " << m << endl;
    if (HBQpdo < kVt7HCqYunZ) {
        {
            if (0) {
                return 0;
            }
        }
        {
            if (0) {
                return 0;
            }
        }
        zhao (kVt7HCqYunZ);
    }
}

int main () {
    int kVt7HCqYunZ;
    zhao (kVt7HCqYunZ);
    int yUIDin;
    cin.getline (RpZ51c4fXS, (1067 - 966));
    kVt7HCqYunZ = strlen (RpZ51c4fXS);
    {
        yUIDin = 1;
        for (; kVt7HCqYunZ > yUIDin;) {
            {
                if ((887 - 887)) {
                    return (347 - 347);
                }
            }
            if (RpZ51c4fXS[yUIDin] == RpZ51c4fXS[(821 - 821)]) {
                RpZ51c4fXS[yUIDin] = '(';
            }
            else {
                RpZ51c4fXS[yUIDin] = ')';
            }
            yUIDin = yUIDin + 1;
        }
    }
    RpZ51c4fXS[0] = '(';
    return 0;
}

