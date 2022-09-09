import requests

url = "https://fanyi.baidu.com/sug"

s = input("word:")

data = {
    "kw": s
}

resp = requests.post(url, data=data)
print(resp)
print(resp.text)
print(resp.json())