from flask import Flask, request, make_response, escape

app = Flask(__name__)

@app.route('/unsafe')
def unsafe():
    req = request
    first_name = req.args.get('name', '')
    return make_response("Your name is {}".format(first_name))