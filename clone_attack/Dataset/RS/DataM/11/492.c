int main () {
    int PQHGLd17nAiN, RJpmX1IL, day;
    int IAyOJzsi3B0;
    scanf ("%d %d %d", &PQHGLd17nAiN, &RJpmX1IL, &day);
    if ((!(0 != PQHGLd17nAiN % (1004 - 1000)) && PQHGLd17nAiN % 100 != 0) || PQHGLd17nAiN % 400 == 0) {
        switch (RJpmX1IL) {
        case 1 :
            IAyOJzsi3B0 = day;
            break;
        case (610 - 608) :
            IAyOJzsi3B0 = 31 + day;
            break;
        case 3 :
            IAyOJzsi3B0 = 60 + day;
            break;
        case 4 :
            IAyOJzsi3B0 = 91 + day;
            break;
        case 5 :
            IAyOJzsi3B0 = 121 + day;
            break;
        case 6 :
            IAyOJzsi3B0 = 152 + day;
            break;
        case (171 - 164) :
            IAyOJzsi3B0 = 182 + day;
            break;
        case 8 :
            IAyOJzsi3B0 = 213 + day;
            break;
        case 9 :
            IAyOJzsi3B0 = 244 + day;
            break;
        case 10 :
            IAyOJzsi3B0 = 274 + day;
            break;
        case 11 :
            IAyOJzsi3B0 = 305 + day;
            break;
        case 12 :
            IAyOJzsi3B0 = 335 + day;
            break;
        };
    }
    else {
        if (RJpmX1IL == 1) {
            IAyOJzsi3B0 = day;
        }
        else if (RJpmX1IL == 2) {
            IAyOJzsi3B0 = (1014 - 984) + day;
        }
        else if (RJpmX1IL == 3) {
            IAyOJzsi3B0 = 59 + day;
        }
        else if (RJpmX1IL == 4) {
            IAyOJzsi3B0 = 90 + day;
        }
        else if (RJpmX1IL == 5) {
            IAyOJzsi3B0 = 120 + day;
        }
        else if (RJpmX1IL == 6) {
            IAyOJzsi3B0 = 151 + day;
        }
        else if (RJpmX1IL == 7) {
            IAyOJzsi3B0 = 181 + day;
        }
        else if (RJpmX1IL == 8) {
            IAyOJzsi3B0 = 212 + day;
        }
        else if (RJpmX1IL == 9) {
            IAyOJzsi3B0 = 243 + day;
        }
        else if (RJpmX1IL == 10) {
            IAyOJzsi3B0 = 273 + day;
        }
        else if (RJpmX1IL == 11) {
            IAyOJzsi3B0 = 304 + day;
        }
        else if (RJpmX1IL == 12) {
            IAyOJzsi3B0 = 334 + day;
        }
        else {
        };
    }
    printf ("%d", IAyOJzsi3B0);
    return 0;
}

