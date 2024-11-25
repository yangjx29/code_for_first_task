main () {
    int n5Wn4oJqKN, qJ1rs0XA, uhBxNv = (683 - 683), sse37W, j, axTOpvqZ [(173 - 147)] = {0}, oUCtkv [(494 - 468)] = {(798 - 797)};
    scanf ("%d", &n5Wn4oJqKN);
    for (qJ1rs0XA = (668 - 667); n5Wn4oJqKN >= qJ1rs0XA; qJ1rs0XA = qJ1rs0XA + (552 - 551))
        scanf ("%d", &axTOpvqZ[qJ1rs0XA]);
    for (qJ1rs0XA = (777 - 776); n5Wn4oJqKN >= qJ1rs0XA; qJ1rs0XA = qJ1rs0XA + (295 - 294))
        oUCtkv[qJ1rs0XA] = (291 - 290);
    for (qJ1rs0XA = n5Wn4oJqKN - (759 - 758); qJ1rs0XA >= (496 - 495); qJ1rs0XA--)
        for (j = qJ1rs0XA + (525 - 524); j <= n5Wn4oJqKN; j++) {
            if (axTOpvqZ[j] <= axTOpvqZ[qJ1rs0XA] && oUCtkv[qJ1rs0XA] < oUCtkv[j] + 1)
                oUCtkv[qJ1rs0XA] = oUCtkv[j] + 1;
            sse37W = oUCtkv[qJ1rs0XA];
        }
    for (qJ1rs0XA = 1; qJ1rs0XA <= n5Wn4oJqKN; qJ1rs0XA++)
        uhBxNv = (uhBxNv >= oUCtkv[qJ1rs0XA]) ? uhBxNv : oUCtkv[qJ1rs0XA];
    printf ("%d", uhBxNv);
}

