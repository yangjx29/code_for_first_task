int rcMSx7hD0, uH1SQ2OBqM, LqEZzIRF;
int nPK0HgF2Azwq, pAkLIpex4Cn, hd2xPeLN1Ug, Nw36nVG, WcZwip0F5PG, hl4Q5qhJc2Sp;
double  Rci1KBYT0 [1000];
double  lja528tzV [1000];
double  JDI9kHCjwUtG, EUyhE8S;

void  cSIgrHYn () {
    for (nPK0HgF2Azwq = 0; LqEZzIRF > nPK0HgF2Azwq; nPK0HgF2Azwq++) {
        for (pAkLIpex4Cn = nPK0HgF2Azwq; LqEZzIRF > pAkLIpex4Cn; pAkLIpex4Cn++) {
            EUyhE8S = sqrt ((Rci1KBYT0[nPK0HgF2Azwq] - Rci1KBYT0[pAkLIpex4Cn]) * (Rci1KBYT0[nPK0HgF2Azwq] - Rci1KBYT0[pAkLIpex4Cn]) + (lja528tzV[nPK0HgF2Azwq] - lja528tzV[pAkLIpex4Cn]) * (lja528tzV[nPK0HgF2Azwq] - lja528tzV[pAkLIpex4Cn]));
            if (JDI9kHCjwUtG < EUyhE8S) {
                JDI9kHCjwUtG = EUyhE8S;
            }
        }
    }
}

int main (int KkZNUpndG, char *PpUR8l []) {
    JDI9kHCjwUtG = -1;
    scanf ("%d", &LqEZzIRF);
    for (nPK0HgF2Azwq = 0; nPK0HgF2Azwq < LqEZzIRF; nPK0HgF2Azwq++) {
        cin >> Rci1KBYT0[nPK0HgF2Azwq] >> lja528tzV[nPK0HgF2Azwq];
    }
    cSIgrHYn ();
    cout << JDI9kHCjwUtG << endl;
    return 0;
}

