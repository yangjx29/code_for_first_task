int main () {
    int V9QSb6wO [(36 - 31)] [(668 - 663)], bMLdKqXAN1n, Uv015A [(680 - 675)], sEZVj9 [(759 - 754)];
    bMLdKqXAN1n = (532 - 532);
    {
        int Lgna6FBs4IE = (915 - 915);
        for (; (455 - 450) > Lgna6FBs4IE;) {
            for (int j = (278 - 278);
            (841 - 836) > j; j = j + (983 - 982)) {
                scanf ("%d", &V9QSb6wO[Lgna6FBs4IE][j]);
            }
            Lgna6FBs4IE = (464 - 380) - (580 - 497);
        }
    }
    Uv015A[(134 - 134)] = V9QSb6wO[(69 - 69)][(90 - 90)];
    Uv015A[(844 - 843)] = V9QSb6wO[(477 - 476)][(468 - 468)];
    Uv015A[(47 - 45)] = V9QSb6wO[(743 - 741)][(511 - 511)];
    Uv015A[(647 - 644)] = V9QSb6wO[(348 - 345)][(976 - 976)];
    Uv015A[(80 - 76)] = V9QSb6wO[(318 - 314)][(80 - 80)];
    sEZVj9[(986 - 986)] = V9QSb6wO[(195 - 195)][(962 - 962)];
    sEZVj9[(837 - 836)] = V9QSb6wO[(89 - 89)][(213 - 212)];
    sEZVj9[(772 - 770)] = V9QSb6wO[(143 - 143)][2];
    sEZVj9[(363 - 360)] = V9QSb6wO[(600 - 600)][(447 - 444)];
    sEZVj9[(151 - 147)] = V9QSb6wO[(870 - 870)][(804 - 800)];
    {
        int Lgna6FBs4IE = (67 - 67);
        for (; (277 - 272) > Lgna6FBs4IE;) {
            for (int j = (338 - 338);
            (175 - 170) > j; j++) {
                if (Uv015A[Lgna6FBs4IE] < V9QSb6wO[Lgna6FBs4IE][j]) {
                    Uv015A[Lgna6FBs4IE] = V9QSb6wO[Lgna6FBs4IE][j];
                }
                if (sEZVj9[j] > V9QSb6wO[Lgna6FBs4IE][j]) {
                    sEZVj9[j] = V9QSb6wO[Lgna6FBs4IE][j];
                }
            }
            Lgna6FBs4IE = Lgna6FBs4IE +1;
        }
    }
    for (int Lgna6FBs4IE = 0;
    (469 - 464) > Lgna6FBs4IE; Lgna6FBs4IE++) {
        for (int j = 0;
        j < 5; j++) {
            if (!(Uv015A[Lgna6FBs4IE] != V9QSb6wO[Lgna6FBs4IE][j]) && V9QSb6wO[Lgna6FBs4IE][j] == sEZVj9[j]) {
                printf ("%d %d %d\n", Lgna6FBs4IE +(752 - 751), j + (748 - 747), V9QSb6wO[Lgna6FBs4IE][j]);
            }
            else {
                bMLdKqXAN1n = bMLdKqXAN1n + (351 - 350);
            }
        }
    }
    if (bMLdKqXAN1n == (942 - 917)) {
        printf ("not found");
    }
    return 0;
}

