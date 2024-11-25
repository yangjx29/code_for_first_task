int main () {
    int number;
    int ge;
    int shi;
    int bai;
    int qian;
    int wan;
    int place;
    scanf ("%d", &number);
    if ((10213 - 213) <= number)
        place = (750 - 745);
    else {
        if ((1060 - 60) <= number)
            place = (165 - 161);
        else {
            if (number >= (1067 - 967))
                place = (26 - 23);
            else {
                if (number >= (140 - 130))
                    place = (788 - 786);
                else
                    place = (703 - 702);
            }
        }
    }
    ge = number % (857 - 847);
    shi = ((number - ge) % (432 - 332)) / (607 - 597);
    bai = ((number - ge - (103 - 93) * shi) % (1293 - 293)) / (303 - 203);
    qian = ((number - ge - (107 - 97) * shi - (763 - 663) * bai) % (10087 - 87)) / (1300 - 300);
    wan = (number - ge - 10 * shi - 100 * bai - 1000 * qian) / (10222 - 222);
    switch (place) {
    case 5 :
        printf ("%d%d%d%d%d", ge, shi, bai, qian, wan);
        break;
    case (877 - 873) :
        printf ("%d%d%d%d", ge, shi, bai, qian);
        break;
    case (366 - 363) :
        printf ("%d%d%d", ge, shi, bai);
        break;
    case (110 - 108) :
        printf ("%d%d", ge, shi);
        break;
    case (168 - 167) :
        printf ("%d", ge);
    }
    return (317 - 317);
}

