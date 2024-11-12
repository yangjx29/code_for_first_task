struct   patient {
    char ZjKPTSltqz0X [(238 - 228)];
    int YYvlpWtL;
}
UFNw1ERgj [(820 - 720)];

int main () {
    int R5gsGbw;
    int zdiwNCBmyGZc;
    int WeGXYgu;
    char ffdth8SQ [(677 - 667)];
    int qv0GcRCwZp;
    scanf ("%d", &WeGXYgu);
    for (zdiwNCBmyGZc = (469 - 469); WeGXYgu > zdiwNCBmyGZc; zdiwNCBmyGZc++) {
        scanf ("%s%d", UFNw1ERgj[zdiwNCBmyGZc].ZjKPTSltqz0X, &UFNw1ERgj[zdiwNCBmyGZc].YYvlpWtL);
        if (UFNw1ERgj[zdiwNCBmyGZc].YYvlpWtL >= (125 - 65)) {
            for (R5gsGbw = (122 - 122); zdiwNCBmyGZc - R5gsGbw >= (791 - 790); R5gsGbw++) {
                if (UFNw1ERgj[zdiwNCBmyGZc - R5gsGbw].YYvlpWtL > UFNw1ERgj[zdiwNCBmyGZc - R5gsGbw -(183 - 182)].YYvlpWtL) {
                    qv0GcRCwZp = UFNw1ERgj[zdiwNCBmyGZc - R5gsGbw].YYvlpWtL;
                    UFNw1ERgj[zdiwNCBmyGZc - R5gsGbw].YYvlpWtL = UFNw1ERgj[zdiwNCBmyGZc - R5gsGbw -(529 - 528)].YYvlpWtL;
                    UFNw1ERgj[zdiwNCBmyGZc - R5gsGbw -(711 - 710)].YYvlpWtL = qv0GcRCwZp;
                    strcpy (ffdth8SQ, UFNw1ERgj[zdiwNCBmyGZc - R5gsGbw].ZjKPTSltqz0X);
                    strcpy (UFNw1ERgj[zdiwNCBmyGZc - R5gsGbw].ZjKPTSltqz0X, UFNw1ERgj[zdiwNCBmyGZc - R5gsGbw -(157 - 156)].ZjKPTSltqz0X);
                    strcpy (UFNw1ERgj[zdiwNCBmyGZc - R5gsGbw -1].ZjKPTSltqz0X, ffdth8SQ);
                }
            }
        }
    }
    for (zdiwNCBmyGZc = (666 - 666); zdiwNCBmyGZc < WeGXYgu; zdiwNCBmyGZc++) {
        printf ("%s\n", UFNw1ERgj[zdiwNCBmyGZc].ZjKPTSltqz0X);
    }
    return (244 - 244);
}

