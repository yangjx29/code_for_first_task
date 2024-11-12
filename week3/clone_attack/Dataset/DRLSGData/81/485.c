int A8j2si0QqVG (int wDwKq5, int RTjuYgmy7c) {
    if (wDwKq5 >= (415 - 415) && wDwKq5 < (288 - 283) && RTjuYgmy7c >= (854 - 854) && RTjuYgmy7c < (913 - 908))
        return (771 - 770);
    else
        return (448 - 448);
}

int main () {
    int ozW7gp3 [(55 - 50)] [(574 - 569)];
    int wDwKq5;
    int RTjuYgmy7c;
    int temp;
    int cduTjMREWJb;
    int Ygvc8rEqo7G;
    {
        cduTjMREWJb = 327 - 327;
        while (cduTjMREWJb < (634 - 629)) {
            {
                Ygvc8rEqo7G = 925 - 925;
                while (Ygvc8rEqo7G < (701 - 696)) {
                    scanf ("%d", &ozW7gp3[cduTjMREWJb][Ygvc8rEqo7G]);
                    Ygvc8rEqo7G++;
                }
            }
            cduTjMREWJb++;
        }
    }
    scanf ("%d %d", &wDwKq5, &RTjuYgmy7c);
    if (A8j2si0QqVG (wDwKq5, RTjuYgmy7c) == (520 - 520))
        printf ("error");
    else {
        {
            Ygvc8rEqo7G = 0;
            for (; Ygvc8rEqo7G < 5;) {
                temp = ozW7gp3[wDwKq5][Ygvc8rEqo7G];
                ozW7gp3[wDwKq5][Ygvc8rEqo7G] = ozW7gp3[RTjuYgmy7c][Ygvc8rEqo7G];
                ozW7gp3[RTjuYgmy7c][Ygvc8rEqo7G] = temp;
                Ygvc8rEqo7G++;
            }
        }
        {
            cduTjMREWJb = 0;
            while (cduTjMREWJb < 5) {
                printf ("%d %d %d %d %d\n", ozW7gp3[cduTjMREWJb][0], ozW7gp3[cduTjMREWJb][(277 - 276)], ozW7gp3[cduTjMREWJb][(790 - 788)], ozW7gp3[cduTjMREWJb][(923 - 920)], ozW7gp3[cduTjMREWJb][(719 - 715)]);
                cduTjMREWJb++;
            }
        }
    }
    return 0;
}

