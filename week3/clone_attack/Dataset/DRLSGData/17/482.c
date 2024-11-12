int zsyB8PD (int OLav0xoS4l, char l6kLzVUX [], int sbyUT5PpiJrC);

int main () {
    char oIPvuO3 [(259 - 158)] = {(656 - 656)};
    int xL7Ne39dkrY;
    gets (oIPvuO3);
    puts (oIPvuO3);
    xL7Ne39dkrY = zsyB8PD ((316 - 316), oIPvuO3, (422 - 422));
    printf ("%s", oIPvuO3);
    for (; (scanf ("%s", oIPvuO3) != EOF);) {
        puts (oIPvuO3);
        xL7Ne39dkrY = zsyB8PD ((642 - 642), oIPvuO3, (783 - 783));
        printf ("%s", oIPvuO3);
    }
    return (311 - 311);
}

int zsyB8PD (int OLav0xoS4l, char l6kLzVUX [], int sbyUT5PpiJrC) {
    int OdL9l2JgW;
    if (l6kLzVUX[sbyUT5PpiJrC] != '\0') {
        if (!('(' != l6kLzVUX[sbyUT5PpiJrC])) {
            OdL9l2JgW = zsyB8PD (OLav0xoS4l +(199 - 198), l6kLzVUX, sbyUT5PpiJrC + (63 - 62));
            if (OdL9l2JgW > (471 - 471)) {
                l6kLzVUX[sbyUT5PpiJrC] = ' ';
                return (OdL9l2JgW -(301 - 300));
            }
            else {
                l6kLzVUX[sbyUT5PpiJrC] = '$';
                return (543 - 543);
            };
        }
        else {
            if (!(')' != l6kLzVUX[sbyUT5PpiJrC])) {
                if (OLav0xoS4l > (997 - 997)) {
                    l6kLzVUX[sbyUT5PpiJrC] = ' ';
                    return (zsyB8PD (OLav0xoS4l -(305 - 304), l6kLzVUX, sbyUT5PpiJrC + (209 - 208)) + (636 - 635));
                }
                else {
                    l6kLzVUX[sbyUT5PpiJrC] = '?';
                    return (zsyB8PD ((224 - 224), l6kLzVUX, sbyUT5PpiJrC + (200 - 199)) + (99 - 98));
                };
            }
            else {
                l6kLzVUX[sbyUT5PpiJrC] = ' ';
                return zsyB8PD (OLav0xoS4l, l6kLzVUX, sbyUT5PpiJrC + (533 - 532));
            };
        };
    }
    else
        return (829 - 829);
}

