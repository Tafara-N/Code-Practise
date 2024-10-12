"""
A simple Flask app

"""

from flask import Flask, render_template


app = Flask(__name__)


@app.route("/")
def home():
    return "It's alive"


if __name__ == "__main__":
    app.run(host="0.0.0.0", debug=True)
