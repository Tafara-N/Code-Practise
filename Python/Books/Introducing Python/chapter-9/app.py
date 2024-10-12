"""
A simple Flask app

"""

from flask import Flask, render_template, request


app = Flask(__name__)


@app.route("/")
def home():
    values = request.args.to_dict()
    return render_template("home.html", **values)


if __name__ == "__main__":
    app.run(host="0.0.0.0", debug=True)
