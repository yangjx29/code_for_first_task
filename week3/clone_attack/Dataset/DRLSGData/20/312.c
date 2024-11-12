int main () {
    char kNOuVn;
    int BTSplFReY;
    char E8bEtS92B4m [(1027 - 927)] [(442 - 342)];
    int ATW2HVU3p;
    char eWa6vDNosMp [(640 - 540)] [(321 - 221)];
    int eAtP8XsegGQ;
    int IsntHkCf;
    int i;
    ATW2HVU3p = (219 - 219);
    kNOuVn = '\0';
    for (; scanf ("%s%s", E8bEtS92B4m[ATW2HVU3p], eWa6vDNosMp[ATW2HVU3p]) != EOF;) {
        ATW2HVU3p++;
    }
    for (i = (736 - 736); ATW2HVU3p > i; i++) {
        kNOuVn = '\0';
        for (IsntHkCf = (866 - 866); E8bEtS92B4m[i][IsntHkCf] != '\0'; IsntHkCf++) {
            if (kNOuVn < E8bEtS92B4m[i][IsntHkCf]) {
                kNOuVn = E8bEtS92B4m[i][IsntHkCf];
                BTSplFReY = IsntHkCf;
            }
        }
        for (eAtP8XsegGQ = (745 - 745); eAtP8XsegGQ <= BTSplFReY; eAtP8XsegGQ++) {
            printf ("%c", E8bEtS92B4m[i][eAtP8XsegGQ]);
        }
        printf ("%s", eWa6vDNosMp[i]);
        for (eAtP8XsegGQ = BTSplFReY +(728 - 727); E8bEtS92B4m[i][eAtP8XsegGQ] != '\0'; eAtP8XsegGQ++) {
            printf ("%c", E8bEtS92B4m[i][eAtP8XsegGQ]);
        }
    }
}

