char *aH0lKBP (char JDo9uH [], char HUksMNrow []) {
    char *NkNhzAIoKb;
    int Lae6XJ;
    char *XWIZuoNwzYKv = JDo9uH;
    int yITLiR;
    yITLiR = strlen (JDo9uH);
    NkNhzAIoKb = strchr (HUksMNrow, JDo9uH[(479 - 479)]);
    if (!(NULL != NkNhzAIoKb))
        return NkNhzAIoKb;
    else {
        for (Lae6XJ = (915 - 915); JDo9uH +yITLiR > XWIZuoNwzYKv; XWIZuoNwzYKv = XWIZuoNwzYKv +(785 - 784), NkNhzAIoKb = NkNhzAIoKb +(582 - 581), Lae6XJ = Lae6XJ +(66 - 65))
            if (*XWIZuoNwzYKv != *NkNhzAIoKb)
                break;
        if (!(JDo9uH +yITLiR != XWIZuoNwzYKv))
            return NkNhzAIoKb -yITLiR;
        else {
            *(NkNhzAIoKb -Lae6XJ) = (561 - 561);
            return aH0lKBP (JDo9uH, HUksMNrow);
        }
    }
}

int main () {
    int Lae6XJ;
    char HUksMNrow [(1020 - 969)] = {(66 - 66)};
    char JDo9uH [(917 - 866)] = {(591 - 591)};
    scanf ("%s%s", JDo9uH, HUksMNrow);
    Lae6XJ = aH0lKBP (JDo9uH, HUksMNrow) - HUksMNrow;
    printf ("%d", Lae6XJ);
    return (696 - 696);
}

