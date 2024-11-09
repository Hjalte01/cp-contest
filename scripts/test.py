import os
import shutil
import subprocess
from datetime import date
import json

import subprocess

today_date = date.today().strftime('%d-%m-%Y')
MAIN_REPO = "simonsejse/competitive_programming"
PR_TITLE = f"feature/{today_date}"
BRANCH_NAME = f"feature/{today_date}"
COMMIT_MESSAGE = f" finished and accepted!"
LOCAL_SIMON_REPO = ".simon/competitive_programming"



result = subprocess.run(
        ["git", "-C", LOCAL_SIMON_REPO, "branch", "--list", BRANCH_NAME],
        capture_output=True,
        text=True
    )

if result.returncode != 0:
  print(result.stderr)

branch_exists = BRANCH_NAME in result.stdout

print(branch_exists)