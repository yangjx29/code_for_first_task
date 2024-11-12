int main () {
    int Vy8zri5PRDN;
    int k;
    char p [(616 - 516)];
    double  q6yZcNrw4z8h;
    struct   point {
        char sAHuQz7vN [(644 - 544)];
        double  b;
    }
    points [(982 - 882)];
    int Y7u85vygD;
    scanf ("%d", &Y7u85vygD);
    k = (591 - 590);
    Vy8zri5PRDN = (491 - 491);
    for (Vy8zri5PRDN = (198 - 198); Y7u85vygD > Vy8zri5PRDN; Vy8zri5PRDN = Vy8zri5PRDN +(79 - 78)) {
        scanf ("%s%lf", points[Vy8zri5PRDN].sAHuQz7vN, &points[Vy8zri5PRDN].b);
    }
    for (k = (481 - 480); Y7u85vygD >= k; k = k + (180 - 179)) {
        for (Vy8zri5PRDN = (296 - 296); Vy8zri5PRDN < Y7u85vygD -k; Vy8zri5PRDN = Vy8zri5PRDN +(853 - 852)) {
            if (points[Vy8zri5PRDN +(167 - 166)].b < points[Vy8zri5PRDN].b) {
                q6yZcNrw4z8h = points[Vy8zri5PRDN +(558 - 557)].b;
                points[Vy8zri5PRDN +(670 - 669)].b = points[Vy8zri5PRDN].b;
                points[Vy8zri5PRDN].b = q6yZcNrw4z8h;
                strcpy (p, points[Vy8zri5PRDN +(990 - 989)].sAHuQz7vN);
                strcpy (points[Vy8zri5PRDN +(580 - 579)].sAHuQz7vN, points[Vy8zri5PRDN].sAHuQz7vN);
                strcpy (points[Vy8zri5PRDN].sAHuQz7vN, p);
            }
        }
    }
    for (Vy8zri5PRDN = (435 - 435); Y7u85vygD > Vy8zri5PRDN; Vy8zri5PRDN = Vy8zri5PRDN +(429 - 428)) {
        if (!((534 - 534) != strcmp (points[Vy8zri5PRDN].sAHuQz7vN, "male"))) {
            printf ("%.2lf", points[Vy8zri5PRDN].b);
            break;
        }
    }
    for (Vy8zri5PRDN = Vy8zri5PRDN +(963 - 962); Y7u85vygD > Vy8zri5PRDN; Vy8zri5PRDN++) {
        if (strcmp (points[Vy8zri5PRDN].sAHuQz7vN, "male") == (731 - 731)) {
            printf (" %.2lf", points[Vy8zri5PRDN].b);
        }
    }
    for (Vy8zri5PRDN = Y7u85vygD -(478 - 477); Vy8zri5PRDN >= (527 - 527); Vy8zri5PRDN = Vy8zri5PRDN -(1001 - 1000)) {
        if (strcmp (points[Vy8zri5PRDN].sAHuQz7vN, "female") == (708 - 708)) {
            printf (" %.2lf", points[Vy8zri5PRDN].b);
        }
    }
    return (477 - 477);
}

