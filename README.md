# GitHub Push Guide

## 🚀 Pushing New Code to GitHub
Follow these steps to push your code to GitHub:

### 1️⃣ **Initialize Git (if not already done)**
```sh
git init
```

### 2️⃣ **Connect to GitHub Repository**
```sh
git remote add origin <your-repo-URL>
```
Example:
```sh
git remote add origin https://github.com/your-username/your-repo.git
```

### 3️⃣ **Add Files and Commit Changes**
```sh
git add .
git commit -m "Initial commit"
```

### 4️⃣ **Push Code to GitHub**
```sh
git branch -M main
git push -u origin main
```

---
## ❌ If `git push -u origin main` Fails

### ✅ **Solution: Fetch, Merge & Push Again**
If you see an error like:
```sh
! [rejected] main -> main (fetch first)
error: failed to push some refs to 'https://github.com/your-username/your-repo.git'
```

This happens because your local branch is behind the remote branch. To fix it:

#### 1️⃣ **Fetch the latest changes from GitHub**
```sh
git fetch origin
```

#### 2️⃣ **Merge the remote changes with your local branch**
```sh
git pull origin main --rebase
```
If you see merge conflicts, resolve them manually, then run:
```sh
git rebase --continue
```

#### 3️⃣ **Push your changes after syncing**
```sh
git push origin main
```

---
# 🔄 **Re-Push New Changes to GitHub**
After making additional changes to your code, follow these steps to push updates:

#### 1️⃣ **Check the status of your repository**
```sh
git status
```

#### 2️⃣ **Stage and commit the new changes**
```sh
git add .
git commit -m "Updated features or bug fixes"
```

#### 3️⃣ **Push the latest changes to GitHub**
```sh
git push origin main
```

---
## 🔥 **Alternative (Force Push - Use with Caution)**
If you want to **overwrite** the remote branch (Warning: This will delete any remote changes that aren’t in your local repo), use:
```sh
git push origin main --force
```

🚀 Now your code is successfully pushed to GitHub!

