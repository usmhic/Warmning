import matplotlib.pyplot as plt
import pandas as pd

fig = plt.figure(figsize=(20,10))
df = pd.read_csv('data.txt', sep="     ", header=None)

df.columns = ["x", "y1", "y2"]
print(df)

fig, ax = plt.subplots()

ax.plot(df['x'],df['y1'], label='No_Smoothing', color='#FFC300', marker='*')
ax.plot(df['x'],df['y2'], label='Lowess',color='#FF5733',marker='*')


plt.xlabel('Years',fontsize=14)
plt.ylabel('Global Surface Temperature in °C',fontsize=14)
plt.title('Land-Ocean Temperature Evolution',fontsize=18,color='#FF5733')
plt.legend()
plt.show()
