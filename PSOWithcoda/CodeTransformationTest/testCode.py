import json
import argparse

def main():
    parser = argparse.ArgumentParser()

    parser.add_argument("--eval_data_file", default=None, type=str,
                        help="An optional input evaluation data file to evaluate the perplexity on (a text file).")
    
    args = parser.parse_args()

    with open(args.eval_data_file) as f:
            for line in f:
                js=json.loads(line.strip())
                # code = ' '.join(js['func'].split())
                code = js['func']
                break
            
    with open("codeinc.c","w") as wf:
        wf.write(code)

if __name__ == '__main__':
    main()
    """
    python testCode.py --eval_data_file ../VulnerabilityPrediction/dataset/test_subs_0_400.jsonl
    """