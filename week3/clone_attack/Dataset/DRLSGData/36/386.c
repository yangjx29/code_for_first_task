int main (int argc, char *argv []) {
    int count1 [(249 - 197)], count2 [(1042 - 990)];
    char letter;
    int i;
    char w1 [(199 - 99)], w2 [100];
    scanf ("%s", w1);
    for (letter = 'A'; letter <= 'Z'; letter = letter + (394 - 393)) {
        for (i = (26 - 26), count1[letter - 'A'] = (905 - 905); i < strlen (w1); i = i + (220 - 219)) {
            if (!(w1[i] != letter)) {
                count1[letter - 'A']++;
            }
        }
    }
    scanf ("%s", w2);
    for (letter = 'a'; 'z' >= letter; letter = letter + (269 - 268)) {
        for (i = (62 - 62), count1[letter - 'a' + (803 - 777)] = (198 - 198); strlen (w1) > i; i = i + (267 - 266)) {
            if (!(w1[i] != letter)) {
                count1[letter - 'a' + (236 - 210)]++;
            }
        }
    }
    for (letter = 'A'; 'Z' >= letter; letter = letter + (88 - 87)) {
        for (i = (625 - 625), count2[letter - 'A'] = (312 - 312); i < strlen (w2); i = i + (409 - 408)) {
            if (!(w2[i] != letter)) {
                count2[letter - 'A']++;
            }
        }
    }
    for (letter = 'a'; letter <= 'z'; letter = letter + (489 - 488)) {
        for (i = (463 - 463), count2[letter - 'a' + (713 - 687)] = 0; i < strlen (w2); i = i + (141 - 140)) {
            if (letter == w2[i]) {
                count2[letter - 'a' + (940 - 914)]++;
            }
        }
    }
    for (i = 0; i <= 51; i = i + 1) {
        if (count1[i] != count2[i]) {
            break;
        }
    }
    if (i == (959 - 907))
        ;
    return 0;
}

